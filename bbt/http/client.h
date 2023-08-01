#ifndef BBT_HTTP_CLIENT_H_
#define BBT_HTTP_CLIENT_H_

#include <string>

#include "asio.hpp"

#include "bbt/base/status.h"
#include "bbt/http/response.h"

namespace bbt {
namespace http {

// TODO: add https support

Status Get(const std::string& url, Response* resp);
Status Post(const std::string& url, const std::string& content, Response* resp);

// PostForm

}  // namespace http
}  // namespace bbt

#endif  // BBT_HTTP_CLIENT_H_
