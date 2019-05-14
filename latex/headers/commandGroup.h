namespace cl {
namespace sycl {
class command_group {
 public:
  template <typename functorT>
  command_group(queue &primaryQueue, const functorT &lambda);

  template <typename functorT>
  command_group(queue &primaryQueue, queue &secondaryQueue,
                const functorT &lambda);

  ~command_group();

  event start_event();

  event kernel_event();

  event complete_event();
};
}  // namespace sycl
}  // namespace cl
