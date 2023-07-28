#include <cpprest/http_client.h>
#include <cpprest/filestream.h>
#include <cpprest/json.h>

using namespace utility;
using namespace web;
using namespace web::http;
using namespace web::http::client;
using namespace concurrency::streams;

int main()
{
    http_client client(U("https://api.openai.com/v1/engines/text-davinci-002/jobs"));

    json::value request_body;
    request_body[U("prompt")] = json::value::string(U("What is the capital of France?"));
    request_body[U("max_tokens")] = json::value::number(1024);
    request_body[U("n")] = json::value::number(1);
    request_body[U("stop")] = json::value::null();
    request_body[U("temperature")] = json::value::number(0.5);

    http_request request(methods::POST);
    request.headers().add(U("Authorization"), U("Bearer YOUR_API_KEY"));
    request.set_body(request_body);

    auto task = client.request(request).then([](http_response response)
    {
        if (response.status_code() == status_codes::OK)
        {
            return response.extract_json();
        }
        return pplx::task_from_result(json::value());
    })
    .then([](json::value response)
    {
        auto message = response[U("choices")][0][U("text")].as_string();
        std::wcout << message << std::endl;
    });

    task.wait();

    return 0;
}
