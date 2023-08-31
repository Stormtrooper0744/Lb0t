void send_message(const std::string& message) {
    boost::asio::Streambuf message_buffer;
    boost::asio::write_streambuf(message_buffer, message);
    // Add a JavaScript payload to the message
    std::string Payload = "eye controlled JavaScript";
    boost::asio::streambuf Payload_buffer;
    boost::asio::write_streambuf( Payload_buffer, Payload);
    // SEND message with Payload
}
