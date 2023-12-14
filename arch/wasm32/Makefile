# https://www.kernel.org/doc/Documentation/kbuild/makefiles.txt

KBUILD_DEFCONFIG := wasm32_defconfig

LDFLAGS := --no-entry --import-memory
KBUILD_CFLAGS += -m32 -matomics -mmutable-globals -mbulk-memory -nostdlib -fvisibility=hidden -fPIC
KBUILD_AFLAGS += $(KBUILD_CFLAGS)

core-y += arch/wasm32/kernel/
core-y += arch/wasm32/mm/

libs-y += arch/wasm32/lib/

drivers-y += arch/wasm32/drivers/

all: vmlinux
