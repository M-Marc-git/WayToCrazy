#include <vulkan/vulkan.h>

int main(void) {
	VkInstance instance = VK_NULL_HANDLE;
	if (vkCreateInstance(NULL, NULL, &instance) != VK_SUCCESS) {
		return -1;
	} else {
		vkDestroyInstance(instance, NULL);
	}
	return 0;
}