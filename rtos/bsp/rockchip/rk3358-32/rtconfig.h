#ifndef RT_CONFIG_H__
#define RT_CONFIG_H__

/* Automatically generated file; DO NOT EDIT. */
/* RT-Thread Project Configuration */

/* RT-Thread Kernel */

#define RT_USING_CORE_RTTHREAD
#define RT_NAME_MAX 8
#define RT_USING_SMP
#define RT_CPUS_NR 4
#define RT_ALIGN_SIZE 4
#define RT_THREAD_PRIORITY_32
#define RT_THREAD_PRIORITY_MAX 32
#define RT_TICK_PER_SECOND 1000
#define RT_USING_OVERFLOW_CHECK
#define RT_USING_HOOK
#define RT_HOOK_USING_FUNC_PTR
#define RT_USING_IDLE_HOOK
#define RT_IDLE_HOOK_LIST_SIZE 4
#define IDLE_THREAD_STACK_SIZE 4096
#define SYSTEM_THREAD_STACK_SIZE 4096
#define RT_USING_TIMER_SOFT
#define RT_TIMER_THREAD_PRIO 4
#define RT_TIMER_THREAD_STACK_SIZE 4096

/* kservice optimization */

#define RT_KPRINTF_USING_LONGLONG
#define RT_DEBUG
#define RT_DEBUG_USING_IO

/* Inter-Thread communication */

#define RT_USING_SEMAPHORE
#define RT_USING_MUTEX
#define RT_USING_EVENT
#define RT_USING_MAILBOX
#define RT_USING_MESSAGEQUEUE

/* Memory Management */

#define RT_USING_MEMPOOL
#define RT_USING_SMALL_MEM
#define RT_USING_SMALL_MEM_AS_HEAP
#define RT_USING_HEAP

/* Kernel Device Object */

#define RT_USING_DEVICE
#define RT_USING_CONSOLE
#define RT_CONSOLEBUF_SIZE 128
#define RT_CONSOLE_DEVICE_NAME "uart2"
#define RT_VER_NUM 0x40101
#define ARCH_ARM
#define RT_USING_CPU_FFS
#define ARCH_ARM_CORTEX_A
#define RT_USING_GIC_V2
#define ARCH_ARMV8

/* RT-Thread Components */

#define RT_USING_COMPONENTS_INIT
#define RT_USING_USER_MAIN
#define RT_MAIN_THREAD_STACK_SIZE 4096
#define RT_MAIN_THREAD_PRIORITY 10
#define RT_USING_MSH
#define RT_USING_FINSH
#define FINSH_USING_MSH
#define FINSH_THREAD_NAME "tshell"
#define FINSH_THREAD_PRIORITY 20
#define FINSH_THREAD_STACK_SIZE 4096
#define FINSH_USING_HISTORY
#define FINSH_HISTORY_LINES 5
#define FINSH_USING_SYMTAB
#define FINSH_CMD_SIZE 80
#define MSH_USING_BUILT_IN_COMMANDS
#define FINSH_USING_DESCRIPTION
#define FINSH_ARG_MAX 10
#define RT_USING_DFS
#define DFS_USING_POSIX
#define DFS_USING_WORKDIR
#define DFS_FILESYSTEMS_MAX 2
#define DFS_FILESYSTEM_TYPES_MAX 2
#define DFS_FD_MAX 16
#define RT_USING_DFS_ELMFAT

/* elm-chan's FatFs, Generic FAT Filesystem Module */

#define RT_DFS_ELM_CODE_PAGE 437
#define RT_DFS_ELM_WORD_ACCESS
#define RT_DFS_ELM_USE_LFN_3
#define RT_DFS_ELM_USE_LFN 3
#define RT_DFS_ELM_LFN_UNICODE_0
#define RT_DFS_ELM_LFN_UNICODE 0
#define RT_DFS_ELM_MAX_LFN 255
#define RT_DFS_ELM_DRIVES 2
#define RT_DFS_ELM_MAX_SECTOR_SIZE 512
#define RT_DFS_ELM_REENTRANT
#define RT_DFS_ELM_MUTEX_TIMEOUT 3000
#define RT_USING_DFS_DEVFS

/* Device Drivers */

#define RT_USING_DEVICE_IPC
#define RT_USING_SYSTEM_WORKQUEUE
#define RT_SYSTEM_WORKQUEUE_STACKSIZE 8192
#define RT_SYSTEM_WORKQUEUE_PRIORITY 23
#define RT_USING_SERIAL
#define RT_USING_SERIAL_V1
#define RT_SERIAL_USING_DMA
#define RT_SERIAL_RB_BUFSZ 64
#define RT_USING_PIN

/* Using USB */


/* C/C++ and POSIX layer */

#define RT_LIBC_DEFAULT_TIMEZONE 8

/* POSIX (Portable Operating System Interface) layer */


/* Interprocess Communication (IPC) */


/* Socket is in the 'Network' category */


/* Network */


/* Utilities */


/* RT-Thread Benchmarks */


/* System */


/* RT-Thread Utestcases */

#define SOC_RK3358
#define RT_USING_FPU

/* RT-Thread board config */

#define RT_BOARD_NAME "rk3358_evb"

/* RT-Thread rockchip common drivers */

#define RT_USING_RESET
#define RT_USING_CACHE

/* Enable Fault Dump Hook */


/* RT-Thread rockchip jpeg enc driver */


/* RT-Thread rockchip pm drivers */


/* RT-Thread rockchip mipi-dphy driver */


/* RT-Thread rockchip isp driver */


/* RT-Thread rockchip vcm driver */


/* RT-Thread rockchip vicap driver */


/* RT-Thread rockchip camera driver */


/* RT-Thread rockchip vicap_lite driver */


/* RT-Thread rockchip csi2host driver */


/* RT-Thread rockchip buffer_manage driver */


/* RT-Thread rockchip coredump driver */


/* Enable PSTORE */


/* RT-Thread rockchip RK3358 drivers */

#define RT_USING_CRU
#define RT_USING_SYSTICK

/* Enable UART */

#define RT_USING_UART
#define RT_USING_UART2

/* RT-Thread bsp test case */


/* RT-Thread Common Test case */


/* RT-Thread third party package */


/* Bluetooth */


/* examples bluetooth */

/* Bluetooth examlpes */

/* Example 'BT API TEST' Config */


/* Example 'BT DISCOVERY' Config */


/* Example 'A2DP SINK' Config */


/* Example 'A2DP SOURCE' Config  */


/* Example 'HFP CLIENT' Config */


#endif
