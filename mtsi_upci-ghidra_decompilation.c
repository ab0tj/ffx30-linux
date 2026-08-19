typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
typedef unsigned short    word;
typedef ulong size_t;

typedef enum Elf_SectionHeaderType_ARM {
    SHT_NULL=0,
    SHT_PROGBITS=1,
    SHT_SYMTAB=2,
    SHT_STRTAB=3,
    SHT_RELA=4,
    SHT_HASH=5,
    SHT_DYNAMIC=6,
    SHT_NOTE=7,
    SHT_NOBITS=8,
    SHT_REL=9,
    SHT_SHLIB=10,
    SHT_DYNSYM=11,
    SHT_INIT_ARRAY=14,
    SHT_FINI_ARRAY=15,
    SHT_PREINIT_ARRAY=16,
    SHT_GROUP=17,
    SHT_SYMTAB_SHNDX=18,
    SHT_ANDROID_REL=1610612737,
    SHT_ANDROID_RELA=1610612738,
    SHT_GNU_ATTRIBUTES=1879048181,
    SHT_GNU_HASH=1879048182,
    SHT_GNU_LIBLIST=1879048183,
    SHT_CHECKSUM=1879048184,
    SHT_SUNW_move=1879048186,
    SHT_SUNW_COMDAT=1879048187,
    SHT_SUNW_syminfo=1879048188,
    SHT_GNU_verdef=1879048189,
    SHT_GNU_verneed=1879048190,
    SHT_GNU_versym=1879048191,
    SHT_ARM_EXIDX=1879048193,
    SHT_ARM_PREEMPTMAP=1879048194,
    SHT_ARM_ATTRIBUTES=1879048195,
    SHT_ARM_DEBUGOVERLAY=1879048196,
    SHT_ARM_OVERLAYSECTION=1879048197
} Elf_SectionHeaderType_ARM;

typedef struct Elf32_Shdr Elf32_Shdr, *PElf32_Shdr;

struct Elf32_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType_ARM sh_type;
    dword sh_flags;
    dword sh_addr;
    dword sh_offset;
    dword sh_size;
    dword sh_link;
    dword sh_info;
    dword sh_addralign;
    dword sh_entsize;
};

typedef struct Elf32_Sym Elf32_Sym, *PElf32_Sym;

struct Elf32_Sym {
    dword st_name;
    dword st_value;
    dword st_size;
    byte st_info;
    byte st_other;
    word st_shndx;
};

typedef struct Elf32_Rel Elf32_Rel, *PElf32_Rel;

struct Elf32_Rel {
    dword r_offset; // location to apply the relocation action
    dword r_info; // the symbol table index and the type of relocation
};

typedef struct Elf32_Ehdr Elf32_Ehdr, *PElf32_Ehdr;

struct Elf32_Ehdr {
    byte e_ident_magic_num;
    char e_ident_magic_str[3];
    byte e_ident_class;
    byte e_ident_data;
    byte e_ident_version;
    byte e_ident_osabi;
    byte e_ident_abiversion;
    byte e_ident_pad[7];
    word e_type;
    word e_machine;
    dword e_version;
    dword e_entry;
    dword e_phoff;
    dword e_shoff;
    dword e_flags;
    word e_ehsize;
    word e_phentsize;
    word e_phnum;
    word e_shentsize;
    word e_shnum;
    word e_shstrndx;
};



undefined4 high_memory;
undefined4 ixp425_pci_read;
undefined8 tq_serial;
undefined4 jiffies;
undefined4 mtsi_upci_bar;
undefined1[128] IRQ_ports;
undefined1[32] modem_reset_timer;
undefined1[20] reset_timer;
undefined4 last_strobe.1;
undefined1[20] serial_timer;
undefined1[128] IRQ_timeout;
undefined1[84] uart_config;
undefined isi_interrupt;
undefined isi_interrupt_single;
undefined1[16] tmp_buf_sem;
undefined4 tmp_buf;
undefined4 DAT_00015258;
undefined4 DAT_00015268;
undefined4 DAT_00015300;
undefined4 isi_table;
undefined ioport_resource;
undefined4 bEthernetLink0;
undefined kmalloc;
undefined kfree;
undefined do_softint;
undefined DAT_00015260;
undefined DAT_00015274;
undefined4 DAT_0001527c;
undefined4 DAT_00015280;
undefined DAT_00015284;
undefined4 DAT_00015304;
undefined4 DAT_000152a8;
undefined4 DAT_000152ac;
undefined4 serial_version;
undefined4 DAT_000152b0;
undefined4 serial_revdate;
undefined DAT_00015868;
undefined DAT_00015254;
undefined DAT_0001525c;
undefined DAT_00015264;
undefined4 DAT_0001526c;
undefined4 DAT_0001529c;
undefined4 DAT_000152a0;
undefined4 DAT_000152a4;
undefined4 serial_name;
string serial_options;
undefined4 DAT_00015308;
undefined1[32] serial_pci_board;
undefined1[112] pci_boards;
undefined1[40] serial_pci_driver;
undefined4 resetlatch_cs3;
undefined4 modem_reset_bitmap;
undefined1[188] serial_driver;
undefined4 serial_refcount;
undefined1[16] serial_table;
undefined1[16] serial_termios;
undefined1[16] serial_termios_locked;
undefined isi_stop;
undefined1[188] callout_driver;
undefined isi_start;
undefined do_isi_serial_bh;
undefined modem_reset_timer_func;
undefined isi_timer;
undefined DAT_ff00d00c;
undefined DAT_000160f4;
undefined DAT_000160f8;
undefined DAT_000160fc;
undefined DAT_00016100;
string s_mtsi_upci_serial_00015c38;
undefined DAT_00015c50;
undefined isi_put_char;
undefined DAT_00015c58;
undefined isi_flush_chars;
undefined isi_write;
undefined isi_write_room;
undefined isi_chars_in_buffer;
undefined isi_flush_buffer;
undefined isi_send_xchar;
undefined del_timer;
undefined isi_throttle;
undefined remove_bh;
undefined isi_unthrottle;
undefined isi_read_proc;
undefined tty_unregister_driver;
undefined __iounmap;
undefined4 tty_std_termios;
undefined isi_break;
undefined isi_ioctl;
undefined isi_set_termios;
undefined isi_close;
undefined isi_wait_until_sent;
undefined isi_hangup;
undefined isi_open;

uint serial_in(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint local_c;
  
  if (*(int *)(param_1 + 0x74) == 2) {
    param_2 = param_2 << (*(ushort *)(param_1 + 0x70) & 0xff);
    uVar1 = param_2 + *(int *)(param_1 + 0x6c);
    if (uVar1 < (high_memory + 0x800000U & 0xff800000)) {
      iVar2 = (*ixp425_pci_read)(uVar1,(~(1 << (uVar1 & 3)) & 0xfU) << 4 | 6,&local_c);
      if (iVar2 != 0) {
        return 0xff;
      }
      local_c = local_c >> ((uVar1 & 3) << 3);
    }
    else {
      local_c = (uint)*(byte *)(param_2 + *(int *)(param_1 + 0x6c));
    }
    local_c = local_c & 0xff;
  }
  else {
    printk("MultiTech ISIUPCI Serial Driver: ERROR - serial_in with wrong io_type\n");
    local_c = 0xfffffff4;
  }
  return local_c;
}



void serial_out(int param_1,int param_2,byte param_3)

{
  uint uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(int *)(param_1 + 0x74) != 2) {
    printk("MultiTech ISIUPCI Serial Driver: ERROR - serial_out with wrong io_type\n");
    return;
  }
  param_2 = param_2 << (*(ushort *)(param_1 + 0x70) & 0xff);
  uVar1 = param_2 + *(int *)(param_1 + 0x6c);
  if (uVar1 < (high_memory + 0x800000U & 0xff800000)) {
    ixp425_pci_write(uVar1,(~(1 << (uVar1 & 3)) & 0xfU) << 4 | 7,(uint)param_3 << ((uVar1 & 3) << 3)
                    );
                    // WARNING: Could not recover jumptable at 0x00010118. Too many branches
                    // WARNING: Treating indirect jump as call
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  *(byte *)(param_2 + *(int *)(param_1 + 0x6c)) = param_3;
  return;
}



void isi_stop(int param_1)

{
  int iVar1;
  uint uVar2;
  char in_NG;
  char in_ZR;
  char in_CY;
  char in_OV;
  byte in_Q;
  
  iVar1 = *(int *)(param_1 + 0x998);
  if ((*(uint *)(iVar1 + 0x38) & 2) != 0) {
    uVar2 = *(uint *)(iVar1 + 0x38) & 0xfffffffd;
    *(uint *)(iVar1 + 0x38) = uVar2;
    serial_out(iVar1,1,uVar2,
               (uint)(byte)(in_NG << 4 | in_ZR << 3 | in_CY << 2 | in_OV << 1 | in_Q) << 0x1b | 0x80
              );
  }
  return;
}



void isi_start(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x998);
  if (((*(int *)(iVar1 + 100) != *(int *)(iVar1 + 0x68)) && (*(int *)(iVar1 + 0x60) != 0)) &&
     ((*(uint *)(iVar1 + 0x38) & 2) == 0)) {
    *(uint *)(iVar1 + 0x38) = *(uint *)(iVar1 + 0x38) | 2;
    serial_out(iVar1,1);
  }
  return;
}



void isi_sched_event(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  
  *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) | 1 << (param_2 & 0xff);
  iVar2 = _test_and_set_bit_be(0,param_1 + 0x80);
  piVar1 = tq_serial._4_4_;
  if (iVar2 == 0) {
    tq_serial._4_4_ = (int *)(param_1 + 0x78);
    *(undefined8 **)(param_1 + 0x78) = &tq_serial;
    *(int **)(param_1 + 0x7c) = piVar1;
    *piVar1 = param_1 + 0x78;
  }
  iVar2 = _test_and_set_bit_be(0,0x16134);
  if (iVar2 == 0) {
    __tasklet_hi_schedule(0x16130);
  }
  return;
}



void receive_chars(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint local_24;
  undefined1 auStack_20 [4];
  
  iVar5 = *(int *)(param_1 + 0x18);
  iVar4 = 0;
  if ((*(byte *)(iVar5 + 0x9a8) & 0x10) == 0) {
    iVar6 = 0x400;
    iVar7 = iVar5 + 0x164;
  }
  else {
    iVar6 = 0x100;
    iVar7 = param_1 + 0xac;
  }
  iVar3 = 0xfff - *(int *)(iVar5 + 0x9e0);
  if (iVar3 < iVar6) {
    iVar6 = iVar3;
  }
  iVar3 = serial_in(param_1,0xb);
  if ((iVar3 < 1) || (iVar6 - iVar3 < 1)) {
    do {
      uVar1 = *(int *)(param_1 + 0x6c) + 0x180;
      uVar2 = high_memory + 0x800000U & 0xff800000;
      if (uVar1 < uVar2) {
        (*ixp425_pci_read)(uVar1,6,auStack_20,uVar2);
      }
      iVar4 = iVar4 + 2;
    } while (iVar4 < iVar3);
    if (0 < iVar3) {
      printk("MTSI_UPCI: lost [%d] bytes on line [%d]\n",iVar4,*(undefined4 *)(param_1 + 0x50));
    }
  }
  else {
    do {
      uVar2 = *(int *)(param_1 + 0x6c) + 0x180;
      if (uVar2 < (high_memory + 0x800000U & 0xff800000)) {
        iVar6 = (*ixp425_pci_read)(uVar2,6,&local_24);
        uVar2 = local_24;
        if (iVar6 != 0) {
          uVar2 = 0xffffffff;
        }
      }
      else {
        uVar2 = *(uint *)(*(int *)(param_1 + 0x6c) + 0x180);
      }
      if ((uVar2 & 1) != 0) {
        *(char *)(iVar7 + iVar4) = (char)(uVar2 >> 8);
        iVar4 = iVar4 + 1;
      }
      if ((uVar2 & 0x10000) != 0) {
        *(char *)(iVar7 + iVar4) = (char)(uVar2 >> 0x18);
        iVar4 = iVar4 + 1;
      }
    } while (iVar4 < iVar3);
    *(int *)(*(int *)(param_1 + 0x14) + 0x50) = iVar4 + *(int *)(*(int *)(param_1 + 0x14) + 0x50);
    if ((*(byte *)(iVar5 + 0x9a8) & 0x10) == 0) {
      param_1 = iVar5 + 0x164;
      iVar6 = iVar5 + 0x564;
    }
    else {
      param_1 = param_1 + 0xac;
      iVar6 = 0;
    }
    (**(code **)(iVar5 + 0xf4))(iVar5,param_1,iVar6,iVar4);
  }
  return;
}



void transmit_chars(int param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 0x2c) == 0) {
    if ((*(int *)(param_1 + 100) == *(int *)(param_1 + 0x68)) ||
       ((*(byte *)(*(int *)(param_1 + 0x18) + 0x124) & 0xc0) != 0)) {
      *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xfffffffd;
      serial_out(param_1,1);
      return;
    }
    iVar3 = *(int *)(param_1 + 0x10);
    iVar1 = serial_in(param_1,10);
    uVar4 = iVar3 - iVar1;
    uVar2 = *(int *)(param_1 + 100) - *(int *)(param_1 + 0x68) & 0xfff;
    if (uVar2 < uVar4) {
      uVar4 = uVar2;
    }
    do {
      uVar2 = *(uint *)(param_1 + 0x68);
      if ((uVar4 + uVar2 & 0xfff) < uVar2) {
        iVar1 = 0x1000 - uVar2;
        _memcpy_toio(*(int *)(param_1 + 0x6c) + 0x100,*(int *)(param_1 + 0x60) + uVar2,iVar1);
        uVar2 = uVar4 - iVar1;
        *(uint *)(param_1 + 0x68) = iVar1 + *(int *)(param_1 + 0x68) & 0xfff;
        *(int *)(*(int *)(param_1 + 0x14) + 0x4c) =
             iVar1 + *(int *)(*(int *)(param_1 + 0x14) + 0x4c);
      }
      else {
        _memcpy_toio(*(int *)(param_1 + 0x6c) + 0x100,
                     *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68),uVar4);
        uVar2 = 0;
        *(uint *)(param_1 + 0x68) = uVar4 + *(int *)(param_1 + 0x68) & 0xfff;
      }
      uVar4 = uVar2;
    } while (0 < (int)uVar2);
    if ((*(int *)(param_1 + 100) - *(int *)(param_1 + 0x68) & 0xfffU) < 0x100) {
      isi_sched_event(param_1,0);
    }
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = 0;
    }
    if (*(int *)(param_1 + 100) == *(int *)(param_1 + 0x68)) {
      *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xfffffffd;
      serial_out(param_1,1);
    }
  }
  else {
    serial_out(param_1,0);
    *(int *)(*(int *)(param_1 + 0x14) + 0x4c) = *(int *)(*(int *)(param_1 + 0x14) + 0x4c) + 1;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = 0;
      return;
    }
  }
  return;
}



void check_modem_status(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = serial_in(param_1,6);
  if ((uVar2 & 0xf) != 0) {
    iVar3 = *(int *)(param_1 + 0x14);
    if ((uVar2 & 4) != 0) {
      *(int *)(iVar3 + 0x44) = *(int *)(iVar3 + 0x44) + 1;
    }
    if ((uVar2 & 2) != 0) {
      *(int *)(iVar3 + 0x40) = *(int *)(iVar3 + 0x40) + 1;
    }
    if ((uVar2 & 8) != 0) {
      *(int *)(iVar3 + 0x48) = *(int *)(iVar3 + 0x48) + 1;
    }
    if ((uVar2 & 1) != 0) {
      *(int *)(iVar3 + 0x3c) = *(int *)(iVar3 + 0x3c) + 1;
    }
    __wake_up(param_1 + 0x9c,1,1);
  }
  if (((*(uint *)(param_1 + 0xc) & 0x2000000) != 0) && ((uVar2 & 8) != 0)) {
    if ((uVar2 & 0x80) == 0) {
      if (((*(uint *)(param_1 + 0xc) & 0x40000400) != 0x40000400) && (*(int *)(param_1 + 0x18) != 0)
         ) {
        tty_hangup();
      }
    }
    else {
      __wake_up(param_1 + 0x8c,1,1);
    }
  }
  if ((*(uint *)(param_1 + 0xc) & 0x4000000) != 0) {
    bVar1 = *(byte *)(*(int *)(param_1 + 0x18) + 0x124);
    if ((bVar1 & 0x40) == 0) {
      if ((uVar2 & 0x10) == 0) {
        *(byte *)(*(int *)(param_1 + 0x18) + 0x124) =
             *(byte *)(*(int *)(param_1 + 0x18) + 0x124) | 0x40;
        *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xfffffffd;
        serial_out(param_1,1);
      }
    }
    else if ((uVar2 & 0x10) != 0) {
      *(byte *)(*(int *)(param_1 + 0x18) + 0x124) = bVar1 & 0xbf;
      *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 2;
      serial_out(param_1,1);
      isi_sched_event(param_1,0);
      return;
    }
  }
  return;
}



void isi_interrupt(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint local_2c;
  undefined1 auStack_28 [4];
  uint local_24;
  
  iVar5 = 0;
  iVar4 = *(int *)(IRQ_ports + param_1 * 4);
  if (iVar4 != 0) {
    if (mtsi_upci_bar + 0x80U < (high_memory + 0x800000U & 0xff800000)) {
      iVar1 = (*ixp425_pci_read)(mtsi_upci_bar + 0x80U,6,&local_24);
      if (iVar1 != 0) {
        local_24 = 0xffffffff;
      }
    }
    else {
      local_24 = *(uint *)(mtsi_upci_bar + 0x80);
    }
    uVar2 = local_24 >> 8;
    iVar1 = 0;
    do {
      uVar3 = uVar2 >> (*(int *)(iVar4 + 0x50) * 3 & 0xffU) & 7;
      if (*(int *)(iVar4 + 0x18) == 0 || uVar3 == 0) {
        if (iVar5 == 0) {
          iVar5 = iVar4;
        }
      }
      else {
        *(undefined4 *)(iVar4 + 0x4c) = jiffies;
        if (uVar3 - 1 < 2) {
          receive_chars(iVar4,auStack_28,param_3);
        }
        check_modem_status(iVar4);
        iVar5 = 0;
        if (uVar3 == 3) {
          transmit_chars(iVar4,0);
        }
      }
      iVar4 = *(int *)(iVar4 + 0xa4);
      iVar6 = iVar1;
      if (iVar4 == 0) {
        iVar4 = *(int *)(IRQ_ports + param_1 * 4);
        iVar6 = iVar1 + 1;
        if (0x100 < iVar1) {
          return;
        }
        if (mtsi_upci_bar + 0x80U < (high_memory + 0x800000U & 0xff800000)) {
          iVar1 = (*ixp425_pci_read)(mtsi_upci_bar + 0x80U,6,&local_2c);
          uVar2 = local_2c;
          if (iVar1 != 0) {
            uVar2 = 0xffffffff;
          }
        }
        else {
          uVar2 = *(uint *)(mtsi_upci_bar + 0x80);
        }
        uVar2 = uVar2 >> 8;
      }
      iVar1 = iVar6;
    } while (iVar5 != iVar4);
  }
  return;
}



void isi_interrupt_single(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint local_20;
  undefined1 auStack_1c [4];
  uint local_18;
  
  iVar6 = *(int *)(IRQ_ports + param_1 * 4);
  if ((iVar6 != 0) && (*(int *)(iVar6 + 0x18) != 0)) {
    iVar5 = *(int *)(iVar6 + 0x50);
    if (mtsi_upci_bar + 0x80U < (high_memory + 0x800000U & 0xff800000)) {
      iVar2 = (*ixp425_pci_read)(mtsi_upci_bar + 0x80U,6,&local_18);
      if (iVar2 != 0) {
        local_18 = 0xffffffff;
      }
    }
    else {
      local_18 = *(uint *)(mtsi_upci_bar + 0x80);
    }
    uVar4 = iVar5 * 3;
    uVar4 = (7 << (uVar4 & 0xff) & local_18 >> 8) >> (uVar4 & 0xff);
    iVar5 = 0;
    do {
      if (uVar4 - 1 < 2) {
        receive_chars(iVar6,auStack_1c,param_3);
      }
      check_modem_status(iVar6);
      if (uVar4 == 3) {
        transmit_chars(iVar6,0);
      }
      if (0x100 < iVar5) break;
      iVar2 = *(int *)(iVar6 + 0x50);
      if (mtsi_upci_bar + 0x80U < (high_memory + 0x800000U & 0xff800000)) {
        iVar3 = (*ixp425_pci_read)(mtsi_upci_bar + 0x80U,6,&local_20);
        uVar4 = local_20;
        if (iVar3 != 0) {
          uVar4 = 0xffffffff;
        }
      }
      else {
        uVar4 = *(uint *)(mtsi_upci_bar + 0x80);
      }
      uVar1 = iVar2 * 3;
      uVar4 = (7 << (uVar1 & 0xff) & uVar4 >> 8) >> (uVar1 & 0xff);
      iVar5 = iVar5 + 1;
    } while (uVar4 - 1 < 4);
    *(undefined4 *)(iVar6 + 0x4c) = jiffies;
  }
  return;
}



void do_isi_serial_bh(void)

{
  if (tq_serial._0_4_ == &tq_serial) {
    return;
  }
  __run_task_queue();
  return;
}



void do_softint(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if ((iVar2 != 0) && (iVar1 = _test_and_clear_bit_be(0,param_1 + 0x48), iVar1 != 0)) {
    if (((*(uint *)(iVar2 + 0x114) & 0x20) != 0) && (*(code **)(iVar2 + 0xfc) != (code *)0x0)) {
      (**(code **)(iVar2 + 0xfc))(iVar2);
    }
    __wake_up(iVar2 + 0x970,1,1);
  }
  return;
}



void modem_reset_timer_func(void)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((*(uint *)(modem_reset_timer + iVar1 * 4) != 0) &&
       (*(uint *)(modem_reset_timer + iVar1 * 4) < jiffies)) {
      reset_modem(iVar1,0);
      *(undefined4 *)(modem_reset_timer + iVar1 * 4) = 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 8);
  mod_timer(reset_timer,jiffies + 10);
  return;
}



void isi_timer(void)

{
  int iVar1;
  uint uVar2;
  byte in_Q;
  uint in_cpsr;
  uint uVar3;
  
  if (999 < (uint)(jiffies - last_strobe_1)) {
    uVar2 = 0;
    do {
      iVar1 = *(int *)(IRQ_ports + uVar2 * 4);
      if (iVar1 != 0) {
        uVar3 = in_cpsr & 0xffffff00;
        if (*(int *)(iVar1 + 0xa4) == 0) {
          isi_interrupt_single(uVar2,0,0);
        }
        else {
          do {
            serial_out(iVar1,1,0);
            *(uint *)(iVar1 + 0x38) = *(uint *)(iVar1 + 0x38) | 2;
            serial_out(iVar1,1);
            iVar1 = *(int *)(iVar1 + 0xa4);
          } while (iVar1 != 0);
          isi_interrupt(uVar2,0,0);
        }
        in_cpsr = uVar3 & 0xffffff00;
        in_Q = (uVar3 >> 0x1b & 1) != 0;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x20);
  }
  last_strobe_1 = jiffies;
  mod_timer(serial_timer,jiffies + 1000);
  if (IRQ_ports._0_4_ != 0) {
    isi_interrupt(0,0,0,(uint)(byte)(((int)IRQ_ports._0_4_ < 0) << 4 | 4U | in_Q) << 0x1b | 0x80);
    mod_timer(serial_timer,jiffies + IRQ_timeout._0_4_);
  }
  return;
}



void figure_IRQ_timeout(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 6000;
  iVar2 = *(int *)(IRQ_ports + param_1 * 4);
  if (iVar2 != 0) {
    do {
      if (*(int *)(iVar2 + 0x24) <= iVar1) {
        iVar1 = *(int *)(iVar2 + 0x24);
      }
      iVar2 = *(int *)(iVar2 + 0xa4);
    } while (iVar2 != 0);
    if (param_1 == 0) {
      iVar1 = iVar1 / 2;
    }
    if (iVar1 < 4) {
      iVar1 = 1;
    }
    else {
      iVar1 = iVar1 + -2;
    }
    *(int *)(IRQ_timeout + param_1 * 4) = iVar1;
    return;
  }
  *(undefined4 *)(IRQ_timeout + param_1 * 4) = 6000;
  return;
}



void irq_list_insert_sorted(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(IRQ_ports + param_1 * 4);
  iVar3 = 0;
  if (iVar1 != 0) {
    do {
      iVar2 = iVar1;
      iVar1 = iVar2;
      if (*(int *)(param_2 + 0x50) < *(int *)(iVar2 + 0x50)) break;
      iVar1 = *(int *)(iVar2 + 0xa4);
      iVar3 = iVar2;
    } while (iVar1 != 0);
  }
  *(int *)(param_2 + 0xa4) = iVar1;
  *(int *)(param_2 + 0xa8) = iVar3;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0xa8) = param_2;
  }
  if (iVar3 == 0) {
    *(int *)(IRQ_ports + param_1 * 4) = param_2;
  }
  else {
    *(int *)(iVar3 + 0xa4) = param_2;
  }
  return;
}



int startup(int param_1)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  undefined1 *local_1c;
  
  iVar4 = *(int *)(param_1 + 0x14);
  iVar1 = get_zeroed_page(0x1f0);
  if (iVar1 == 0) {
    return -0xc;
  }
  if (-1 < *(int *)(param_1 + 0xc)) {
    if (((*(int *)(iVar4 + 8) != 0) || (*(int *)(iVar4 + 0x30) != 0)) &&
       (*(int *)(iVar4 + 0x18) != 0)) {
      if (*(int *)(param_1 + 0x60) == 0) {
        *(int *)(param_1 + 0x60) = iVar1;
      }
      else {
        free_pages(iVar1,0);
      }
      if ((*(uint *)(uart_config + *(int *)(iVar4 + 0x18) * 0xc + 8) & 4) != 0) {
        serial_out(param_1,9,0x10);
        serial_out(param_1,1,0);
        serial_out(param_1,0xb,0x20);
        serial_out(param_1,8,0xc3);
        serial_out(param_1,3,0);
        serial_out(param_1,9,0x10);
        serial_out(param_1,1,0);
        serial_out(param_1,3,0);
      }
      if ((*(uint *)(uart_config + *(int *)(iVar4 + 0x18) * 0xc + 8) & 1) != 0) {
        serial_out(param_1,2,1);
        serial_out(param_1,2,7);
        serial_out(param_1,2,0);
      }
      serial_in(param_1,5);
      serial_in(param_1,0);
      serial_in(param_1,2);
      serial_in(param_1,6);
      if (((*(uint *)(param_1 + 0xc) & 0x4000) != 0) ||
         (iVar1 = serial_in(param_1,5), iVar1 != 0xff)) {
        if ((*(int *)(iVar4 + 0xc) != 0) &&
           ((*(int *)(IRQ_ports + *(int *)(iVar4 + 0xc) * 4) == 0 ||
            (*(int *)(*(int *)(IRQ_ports + *(int *)(iVar4 + 0xc) * 4) + 0xa4) == 0)))) {
          iVar1 = *(int *)(iVar4 + 0xc);
          if (*(int *)(IRQ_ports + iVar1 * 4) == 0) {
            pcVar2 = isi_interrupt_single;
          }
          else {
            free_irq(iVar1,IRQ_ports + iVar1 * 4);
            pcVar2 = isi_interrupt;
          }
          local_1c = IRQ_ports + *(int *)(iVar4 + 0xc) * 4;
          iVar1 = request_irq(*(undefined4 *)(iVar4 + 0xc),pcVar2,0x4000000,"serial");
          if (iVar1 != 0) {
            uVar3 = (uint)&local_1c & 0xffffe000;
            if ((*(uint *)(uVar3 + 0x1d0) & 0x200000) == 0) {
              return iVar1;
            }
            *(uint *)(uVar3 + 4) = *(uint *)(uVar3 + 4) | 0x100;
            if (*(int *)(param_1 + 0x18) != 0) {
              _set_bit_be(1,*(int *)(param_1 + 0x18) + 0x114);
            }
            return 0;
          }
        }
        irq_list_insert_sorted(*(undefined4 *)(iVar4 + 0xc),param_1);
        figure_IRQ_timeout(*(undefined4 *)(iVar4 + 0xc));
        serial_out(param_1,3,3);
        *(undefined4 *)(param_1 + 0x3c) = 0;
        if ((*(uint *)(*(int *)(*(int *)(param_1 + 0x18) + 0x100) + 8) & 0x100f) != 0) {
          *(undefined4 *)(param_1 + 0x3c) = 3;
        }
        if (*(int *)(iVar4 + 0xc) != 0) {
          *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) | 8;
        }
        serial_out(param_1,4,*(undefined4 *)(param_1 + 0x3c));
        serial_out(param_1,0x93,0);
        serial_out(param_1,0x90,0xff);
        *(undefined4 *)(param_1 + 0x38) = 0xd;
        if (*(int *)(*(int *)(param_1 + 0x14) + 0x18) == 5) {
          *(undefined4 *)(param_1 + 0x38) = 0xcd;
        }
        serial_out(param_1,1,*(undefined4 *)(param_1 + 0x38));
        serial_in(param_1,5);
        serial_in(param_1,0);
        serial_in(param_1,2);
        serial_in(param_1,6);
        if (*(int *)(param_1 + 0x18) != 0) {
          _clear_bit_be(1,*(int *)(param_1 + 0x18) + 0x114);
        }
        *(undefined4 *)(param_1 + 0x68) = 0;
        *(undefined4 *)(param_1 + 100) = 0;
        mod_timer(serial_timer,jiffies + 2);
        mod_timer(reset_timer,jiffies + 2);
        if (*(int *)(param_1 + 0x18) != 0) {
          if ((*(uint *)(param_1 + 0xc) & 0x1030) == 0x10) {
            *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x96c) = 0xe100;
          }
          if ((*(uint *)(param_1 + 0xc) & 0x1030) == 0x20) {
            *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x96c) = 0x1c200;
          }
          if ((*(uint *)(param_1 + 0xc) & 0x1030) == 0x1000) {
            *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x96c) = 0x38400;
          }
          if ((*(uint *)(param_1 + 0xc) & 0x1030) == 0x1010) {
            *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x96c) = 0x70800;
          }
        }
        change_speed(param_1,0);
        *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x80000000;
        return 0;
      }
      printk("ttyM%d: LSR safety check engaged!\n",*(undefined4 *)(iVar4 + 0x1c));
      uVar3 = (uint)&local_1c & 0xffffe000;
      if ((*(uint *)(uVar3 + 0x1d0) & 0x200000) == 0) {
        return -0x13;
      }
      *(uint *)(uVar3 + 4) = *(uint *)(uVar3 + 4) | 0x100;
      if (*(int *)(param_1 + 0x18) == 0) {
        return 0;
      }
      _set_bit_be(1,*(int *)(param_1 + 0x18) + 0x114);
      return 0;
    }
    if (*(int *)(param_1 + 0x18) != 0) {
      _set_bit_be(1,*(int *)(param_1 + 0x18) + 0x114);
    }
  }
  free_pages(iVar1,0);
  return 0;
}



int shutdown(int __fd,int __how)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte in_Q;
  
  iVar3 = __fd;
  if (*(int *)(__fd + 0xc) < 0) {
    iVar3 = *(int *)(__fd + 0x14);
    __wake_up(__fd + 0x9c,1,1,
              (uint)(byte)((*(int *)(__fd + 0xc) == 0) << 3 | 0x14U | in_Q) << 0x1b | 0x80);
    *(undefined4 *)(__fd + 0x38) = 0;
    serial_out(__fd,1);
    *(uint *)(__fd + 0x3c) = *(uint *)(__fd + 0x3c) & 0xfffffff7;
    uVar1 = serial_in(__fd,3);
    serial_out(__fd,3,uVar1 & 0xffffffbf);
    if ((*(int *)(__fd + 0x18) == 0) ||
       ((*(uint *)(*(int *)(*(int *)(__fd + 0x18) + 0x100) + 8) & 0x400) != 0)) {
      *(uint *)(__fd + 0x3c) = *(uint *)(__fd + 0x3c) & 0xfffffffc;
    }
    serial_out(__fd,4,*(undefined4 *)(__fd + 0x3c));
    serial_out(__fd,2,7);
    serial_out(__fd,2,0);
    serial_in(__fd,0);
    if (*(int *)(__fd + 0x18) != 0) {
      _set_bit_be(1,*(int *)(__fd + 0x18) + 0x114);
    }
    *(uint *)(__fd + 0xc) = *(uint *)(__fd + 0xc) & 0x7fffffff;
    if (*(int *)(__fd + 0xa4) != 0) {
      *(undefined4 *)(*(int *)(__fd + 0xa4) + 0xa8) = *(undefined4 *)(__fd + 0xa8);
    }
    if (*(int *)(__fd + 0xa8) == 0) {
      *(undefined4 *)(IRQ_ports + *(int *)(iVar3 + 0xc) * 4) = *(undefined4 *)(__fd + 0xa4);
    }
    else {
      *(undefined4 *)(*(int *)(__fd + 0xa8) + 0xa4) = *(undefined4 *)(__fd + 0xa4);
    }
    figure_IRQ_timeout(*(undefined4 *)(iVar3 + 0xc));
    if ((*(int *)(iVar3 + 0xc) != 0) &&
       ((*(int *)(IRQ_ports + *(int *)(iVar3 + 0xc) * 4) == 0 ||
        (*(int *)(*(int *)(IRQ_ports + *(int *)(iVar3 + 0xc) * 4) + 0xa4) == 0)))) {
      iVar2 = *(int *)(iVar3 + 0xc);
      if (*(int *)(IRQ_ports + iVar2 * 4) == 0) {
        free_irq(*(int *)(iVar3 + 0xc),IRQ_ports + *(int *)(iVar3 + 0xc) * 4);
      }
      else {
        free_irq(iVar2,IRQ_ports + iVar2 * 4);
        iVar3 = request_irq(*(undefined4 *)(iVar3 + 0xc),isi_interrupt_single,0x4000000,"serial",
                            IRQ_ports + *(int *)(iVar3 + 0xc) * 4);
        if (iVar3 != 0) {
          printk("serial shutdown: request_irq: error %d  Couldn\'t reacquire IRQ.\n",iVar3);
        }
      }
    }
    iVar3 = 0;
    if (*(int *)(__fd + 0x60) != 0) {
      *(undefined4 *)(__fd + 0x60) = 0;
      iVar3 = free_pages();
    }
  }
  return iVar3;
}



void change_speed(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar9 = 0;
  uVar8 = 0;
  if (*(int *)(param_1 + 0x18) == 0) {
    return;
  }
  iVar4 = *(int *)(*(int *)(param_1 + 0x18) + 0x100);
  if (iVar4 == 0) {
    return;
  }
  uVar7 = *(uint *)(iVar4 + 8);
  if ((*(int *)(param_1 + 4) == 0) && (*(int *)(param_1 + 0x6c) == 0)) {
    return;
  }
  uVar5 = uVar7 & 0x30;
  if (uVar5 == 0x10) {
    uVar5 = 1;
    iVar4 = 8;
    goto LAB_00011480;
  }
  if (0x10 < uVar5) {
    if (uVar5 == 0x20) {
      uVar5 = 2;
      iVar4 = 9;
      goto LAB_00011480;
    }
    if (uVar5 == 0x30) {
      uVar5 = 3;
      iVar4 = 10;
      goto LAB_00011480;
    }
  }
  uVar5 = 0;
  iVar4 = 7;
LAB_00011480:
  if ((uVar7 & 0x40) != 0) {
    uVar5 = uVar5 | 4;
    iVar4 = iVar4 + 1;
  }
  if ((uVar7 & 0x100) != 0) {
    uVar5 = uVar5 | 8;
    iVar4 = iVar4 + 1;
  }
  if ((uVar7 & 0x200) == 0) {
    uVar5 = uVar5 | 0x10;
  }
  if ((uVar7 & 0x40000000) != 0) {
    uVar5 = uVar5 | 0x20;
  }
  iVar1 = tty_get_baud_rate(*(undefined4 *)(param_1 + 0x18));
  if (iVar1 == 0) {
    iVar1 = 0x2580;
  }
  iVar6 = *(int *)(*(int *)(param_1 + 0x14) + 4);
  if ((iVar1 == 0x9600) && ((*(uint *)(param_1 + 0xc) & 0x1030) == 0x30)) {
    uVar8 = *(uint *)(*(int *)(param_1 + 0x14) + 0x28);
  }
  else if (iVar1 == 0x86) {
    uVar8 = (iVar6 << 1) / 0x10d;
  }
  else if (iVar1 != 0) {
    uVar8 = __divsi3(iVar6);
  }
  if (uVar8 == 0 && param_2 != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x18) + 0x100);
    *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) & 0xffffeff0;
    iVar1 = *(int *)(*(int *)(param_1 + 0x18) + 0x100);
    *(uint *)(iVar1 + 8) = *(uint *)(param_2 + 8) & 0x100f | *(uint *)(iVar1 + 8);
    iVar1 = tty_get_baud_rate(*(undefined4 *)(param_1 + 0x18));
    if (iVar1 == 0) {
      iVar1 = 0x2580;
    }
    if ((iVar1 == 0x9600) && ((*(uint *)(param_1 + 0xc) & 0x1030) == 0x30)) {
      uVar8 = *(uint *)(*(int *)(param_1 + 0x14) + 0x28);
    }
    else if (iVar1 == 0x86) {
      uVar8 = (iVar6 << 1) / 0x10d;
    }
    else if (iVar1 != 0) {
      uVar8 = __divsi3(iVar6);
    }
  }
  if (uVar8 == 0) {
    uVar8 = iVar6 / 0x2580;
  }
  *(uint *)(param_1 + 0x28) = uVar8;
  iVar4 = __divsi3(uVar8 * iVar4 * *(int *)(param_1 + 0x10) * 100,iVar6);
  *(int *)(param_1 + 0x24) = iVar4 + 2;
  if ((*(uint *)(uart_config + *(int *)(*(int *)(param_1 + 0x14) + 0x18) * 0xc + 8) & 2) != 0) {
    iVar4 = __divsi3(*(undefined4 *)(*(int *)(param_1 + 0x14) + 4),uVar8);
    if (iVar4 < 0x960) {
      uVar9 = 1;
    }
    else {
      uVar9 = 0x81;
    }
  }
  uVar2 = *(uint *)(param_1 + 0x38) & 0xfffffff7;
  *(uint *)(param_1 + 0x38) = uVar2;
  if ((*(uint *)(param_1 + 0xc) & 0x800) != 0) {
    *(uint *)(param_1 + 0x38) = uVar2 | 8;
  }
  if ((int)uVar7 < 0) {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x4000000;
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 8;
  }
  else {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfbffffff;
  }
  if ((uVar7 & 0x800) == 0) {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x2000000;
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 8;
  }
  else {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfdffffff;
  }
  serial_out(param_1,1,*(undefined4 *)(param_1 + 0x38));
  *(undefined4 *)(param_1 + 0x1c) = 0x23;
  if ((**(uint **)(*(int *)(param_1 + 0x18) + 0x100) & 0x10) != 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0x2f;
  }
  if ((**(uint **)(*(int *)(param_1 + 0x18) + 0x100) & 10) != 0) {
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x10;
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((**(uint **)(*(int *)(param_1 + 0x18) + 0x100) & 4) != 0) {
    *(undefined4 *)(param_1 + 0x20) = 0xc;
  }
  if ((**(uint **)(*(int *)(param_1 + 0x18) + 0x100) & 1) != 0) {
    uVar2 = *(uint *)(param_1 + 0x20);
    *(uint *)(param_1 + 0x20) = uVar2 | 0x10;
    if ((**(uint **)(*(int *)(param_1 + 0x18) + 0x100) & 4) != 0) {
      *(uint *)(param_1 + 0x20) = uVar2 | 0x12;
    }
  }
  if ((uVar7 & 0x80) == 0) {
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 1;
  }
  if ((*(uint *)(uart_config + *(int *)(*(int *)(param_1 + 0x14) + 0x18) * 0xc + 8) & 4) != 0) {
    serial_out(param_1,3,0xbf);
    if ((int)uVar7 < 0) {
      uVar3 = 0x80;
    }
    else {
      uVar3 = 0;
    }
    serial_out(param_1,2,uVar3);
    if (*(int *)(*(int *)(param_1 + 0x14) + 0x18) == 5) {
      if ((int)uVar7 < 0) {
        uVar3 = 0xd0;
      }
      else {
        uVar3 = 0x50;
      }
      serial_out(param_1,9,uVar3);
    }
  }
  serial_out(param_1,3,uVar5 | 0x80);
  serial_out(param_1,0,uVar8 & 0xff);
  serial_out(param_1,1,(int)uVar8 >> 8);
  serial_out(param_1,3,uVar5);
  *(uint *)(param_1 + 0x40) = uVar5;
  if ((uVar9 & 1) != 0) {
    serial_out(param_1,2,1);
  }
  serial_out(param_1,2,uVar9);
  return;
}



int isi_put_char(int param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  byte in_Q;
  
  iVar2 = *(int *)(param_1 + 0x998);
  if (param_1 == 0) {
    return 0;
  }
  if (*(int *)(iVar2 + 0x60) == 0) {
    return param_1;
  }
  iVar1 = (uint)(byte)((*(int *)(iVar2 + 0x60) < 0) << 4 | 4U | in_Q) << 0x1b;
  if ((*(int *)(iVar2 + 0x68) - *(int *)(iVar2 + 100) & 0xfffU) == 1) {
    return iVar1;
  }
  *(undefined1 *)(*(int *)(iVar2 + 0x60) + *(int *)(iVar2 + 100)) = param_2;
  *(uint *)(iVar2 + 100) = *(int *)(iVar2 + 100) + 1U & 0xfff;
  return iVar1;
}



void isi_flush_chars(int param_1)

{
  int iVar1;
  uint uVar2;
  byte in_Q;
  
  iVar1 = *(int *)(param_1 + 0x998);
  if ((*(int *)(iVar1 + 100) != *(int *)(iVar1 + 0x68)) &&
     ((*(byte *)(param_1 + 0x124) & 0xc0) == 0)) {
    if (*(int *)(iVar1 + 0x60) != 0) {
      uVar2 = *(uint *)(iVar1 + 0x38) | 2;
      *(uint *)(iVar1 + 0x38) = uVar2;
      serial_out(iVar1,1,uVar2,
                 (uint)(byte)((*(int *)(iVar1 + 0x60) < 0) << 4 | 4U | in_Q) << 0x1b | 0x80);
    }
  }
  return;
}



int isi_write(int param_1,int param_2,void *param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  size_t __n;
  int iVar7;
  int iVar8;
  uint in_cpsr;
  uint local_28;
  
  iVar8 = 0;
  iVar7 = *(int *)(param_1 + 0x998);
  if (((param_1 == 0) || (*(int *)(iVar7 + 0x60) == 0)) || (tmp_buf == (void *)0x0)) {
    iVar8 = 0;
  }
  else {
    if (param_2 == 0) {
      while( true ) {
        iVar1 = -*(int *)(iVar7 + 100) + 0xfff;
        uVar6 = iVar1 + *(int *)(iVar7 + 0x68) & 0xfff;
        if (iVar1 < (int)uVar6) {
          uVar6 = -*(int *)(iVar7 + 100) + 0x1000;
        }
        if ((int)param_4 <= (int)uVar6) {
          uVar6 = param_4;
        }
        if ((int)uVar6 < 1) break;
        memcpy((void *)(*(int *)(iVar7 + 0x60) + *(int *)(iVar7 + 100)),param_3,uVar6);
        *(uint *)(iVar7 + 100) = uVar6 + *(int *)(iVar7 + 100) & 0xfff;
        param_3 = (void *)((int)param_3 + uVar6);
        param_4 = param_4 - uVar6;
        iVar8 = iVar8 + uVar6;
      }
    }
    else {
      tmp_buf_sem._0_4_ = tmp_buf_sem._0_4_ + -1;
      uVar6 = in_cpsr & 0xffffff00;
      if ((int)in_cpsr < 0) {
        __down_failed();
      }
      local_28 = 0xfff;
      while( true ) {
        iVar1 = local_28 - *(int *)(iVar7 + 100);
        uVar4 = iVar1 + *(int *)(iVar7 + 0x68) & local_28;
        if (iVar1 < (int)uVar4) {
          uVar4 = iVar1 + 1;
        }
        if ((int)param_4 <= (int)uVar4) {
          uVar4 = param_4;
        }
        if ((int)uVar4 < 1) goto LAB_00011aec;
        uVar5 = *(uint *)(((uint)&local_28 & 0xffffe000) + 0xc);
        uVar2 = (int)param_3 + uVar4;
        uVar3 = uVar2;
        if (!CARRY4((uint)param_3,uVar4)) {
          uVar3 = uVar2 - (uVar5 + 1);
        }
        if (!CARRY4((uint)param_3,uVar4) && uVar2 <= uVar5) {
          uVar5 = 0;
        }
        if (uVar5 == 0) {
          uVar2 = __arch_copy_from_user(tmp_buf,param_3,uVar4);
        }
        else {
          uVar2 = uVar4;
          if (uVar4 != 0) {
            __memzero(tmp_buf,uVar4,uVar3);
          }
        }
        __n = uVar4 - uVar2;
        if (__n == 0) break;
        uVar6 = uVar6 & 0xffffff00;
        iVar1 = -*(int *)(iVar7 + 100) + 0xfff;
        uVar4 = iVar1 + *(int *)(iVar7 + 0x68) & 0xfff;
        if (iVar1 < (int)uVar4) {
          uVar4 = -*(int *)(iVar7 + 100) + 0x1000;
        }
        if ((int)uVar4 <= (int)__n) {
          __n = uVar4;
        }
        memcpy((void *)(*(int *)(iVar7 + 0x60) + *(int *)(iVar7 + 100)),tmp_buf,__n);
        *(size_t *)(iVar7 + 100) = __n + *(int *)(iVar7 + 100) & 0xfff;
        uVar6 = uVar6 & 0xffffff00;
        param_3 = (void *)((int)param_3 + __n);
        param_4 = param_4 - __n;
        iVar8 = iVar8 + __n;
      }
      if (iVar8 == 0) {
        iVar8 = -0xe;
      }
LAB_00011aec:
      tmp_buf_sem._0_4_ = tmp_buf_sem._0_4_ + 1;
      if ((uVar6 >> 0x1e & 1) != 0 || (int)uVar6 < 0 != ((uVar6 >> 0x1c & 1) != 0)) {
        __up_wakeup();
      }
    }
    if (((*(int *)(iVar7 + 100) != *(int *)(iVar7 + 0x68)) &&
        ((*(byte *)(param_1 + 0x124) & 0xc0) == 0)) && ((*(uint *)(iVar7 + 0x38) & 2) == 0)) {
      *(uint *)(iVar7 + 0x38) = *(uint *)(iVar7 + 0x38) | 2;
      serial_out(iVar7,1);
    }
  }
  return iVar8;
}



uint isi_write_room(int param_1)

{
  return (*(int *)(*(int *)(param_1 + 0x998) + 0x68) - *(int *)(*(int *)(param_1 + 0x998) + 100)) -
         1U & 0xfff;
}



uint isi_chars_in_buffer(int param_1)

{
  return *(int *)(*(int *)(param_1 + 0x998) + 100) - *(int *)(*(int *)(param_1 + 0x998) + 0x68) &
         0xfff;
}



void isi_flush_buffer(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x998);
  *(undefined4 *)(iVar1 + 0x68) = 0;
  *(undefined4 *)(iVar1 + 100) = 0;
  __wake_up(param_1 + 0x970,1,1);
  if (((*(uint *)(param_1 + 0x114) & 0x20) != 0) && (*(code **)(param_1 + 0xfc) != (code *)0x0)) {
    (**(code **)(param_1 + 0xfc))(param_1);
  }
  return;
}



void isi_send_xchar(int param_1,uint param_2)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = *(int *)(param_1 + 0x998);
  *(uint *)(iVar1 + 0x2c) = param_2 & 0xff;
  if ((param_2 & 0xff) == 0) {
    return;
  }
  *(uint *)(iVar1 + 0x38) = *(uint *)(iVar1 + 0x38) | 2;
  serial_out(iVar1,1);
                    // WARNING: Could not recover jumptable at 0x00011cbc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void isi_throttle(int param_1)

{
  int iVar1;
  int iVar2;
  byte in_Q;
  
  iVar2 = *(int *)(param_1 + 0x998);
  if ((**(uint **)(param_1 + 0x100) & 0x1000) != 0) {
    isi_send_xchar(param_1,*(undefined1 *)((int)*(uint **)(param_1 + 0x100) + 0x1a));
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x100) + 8);
  if (iVar1 < 0) {
    *(uint *)(iVar2 + 0x3c) = *(uint *)(iVar2 + 0x3c) & 0xfffffffd;
  }
  serial_out(iVar2,4,*(undefined4 *)(iVar2 + 0x3c),
             (uint)(byte)((iVar1 < 0) << 4 | (iVar1 == 0) << 3 | 4U | in_Q) << 0x1b | 0x80);
  return;
}



void isi_unthrottle(int param_1)

{
  int iVar1;
  int iVar2;
  byte in_Q;
  
  iVar2 = *(int *)(param_1 + 0x998);
  if ((**(uint **)(param_1 + 0x100) & 0x1000) != 0) {
    if (*(int *)(iVar2 + 0x2c) == 0) {
      isi_send_xchar(param_1,*(undefined1 *)(*(int *)(param_1 + 0x100) + 0x19));
    }
    else {
      *(undefined4 *)(iVar2 + 0x2c) = 0;
    }
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x100) + 8);
  if (iVar1 < 0) {
    *(uint *)(iVar2 + 0x3c) = *(uint *)(iVar2 + 0x3c) | 2;
  }
  serial_out(iVar2,4,*(undefined4 *)(iVar2 + 0x3c),
             (uint)(byte)((iVar1 < 0) << 4 | (iVar1 == 0) << 3 | 4U | in_Q) << 0x1b | 0x80);
  return;
}



undefined4 get_serial_info(int param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined2 local_2c;
  undefined1 local_2a;
  undefined4 local_28;
  undefined2 local_24;
  
  iVar3 = *(int *)(param_1 + 0x14);
  if (param_2 == 0) {
    uVar1 = 0xfffffff2;
  }
  else {
    __memzero(&local_4c,0x3c);
    local_4c = 4;
    local_48 = *(undefined4 *)(iVar3 + 0x1c);
    local_44 = *(undefined4 *)(iVar3 + 0x30);
    local_40 = *(undefined4 *)(iVar3 + 0xc);
    local_3c = *(undefined4 *)(iVar3 + 0x10);
    local_38 = *(undefined4 *)(iVar3 + 0x24);
    local_30 = *(undefined4 *)(iVar3 + 4);
    local_2c = *(undefined2 *)(iVar3 + 0x36);
    local_24 = *(undefined2 *)(iVar3 + 0x38);
    local_34 = *(undefined4 *)(iVar3 + 0x28);
    local_28 = *(undefined4 *)(iVar3 + 0x14);
    local_2a = *(undefined1 *)(iVar3 + 0xb3);
    iVar3 = 0x3c;
    uVar2 = *(uint *)(((uint)&local_4c & 0xffffe000) + 0xc);
    if (param_2 < 0xffffffc4 && param_2 + 0x3c <= uVar2) {
      uVar2 = 0;
    }
    if (uVar2 == 0) {
      iVar3 = __arch_copy_to_user(param_2,&local_4c,0x3c);
    }
    if (iVar3 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0xfffffff2;
    }
  }
  return uVar1;
}



undefined4 set_serial_info(int param_1,uint param_2)

{
  undefined4 uVar1;
  int extraout_r1;
  uint uVar2;
  int iVar3;
  undefined4 *__src;
  bool bVar4;
  undefined1 auStack_114 [16];
  uint local_104;
  int local_ec;
  int local_58 [2];
  int local_50;
  uint local_4c;
  uint local_48;
  int local_44;
  undefined4 local_40;
  int local_3c;
  short local_38;
  int local_34;
  undefined2 local_30;
  
  iVar3 = 0x3c;
  uVar2 = *(uint *)(((uint)auStack_114 & 0xffffe000) + 0xc);
  if (param_2 < 0xffffffc4 && param_2 + 0x3c <= uVar2) {
    uVar2 = 0;
  }
  if (uVar2 == 0) {
    iVar3 = __arch_copy_from_user(local_58,param_2,0x3c);
  }
  else {
    __memzero(local_58,0x3c);
  }
  if (iVar3 != 0) {
    return 0xfffffff2;
  }
  __src = *(undefined4 **)(param_1 + 0x14);
  memcpy(auStack_114,__src,0xbc);
  bVar4 = local_4c != __src[3];
  uVar2 = (uint)auStack_114 & 0xffffe000;
  if ((*(uint *)(uVar2 + 0x1d0) & 0x200000) == 0) {
    if (((((bVar4) || (local_3c != __src[1])) || (local_58[0] != __src[6])) ||
        ((local_38 != *(short *)((int)__src + 0x36) || (local_44 != __src[9])))) ||
       ((local_48 & 0xffffcbcf) != (__src[4] & 0xffffcbcf))) {
      return 0xffffffff;
    }
    __src[4] = __src[4] & 0xffffcbcf | local_48 & 0x3430;
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffffcbcf | local_48 & 0x3430;
    __src[10] = local_40;
LAB_00012210:
    if (__src[2] != 0) goto LAB_00012228;
  }
  else {
    *(uint *)(uVar2 + 4) = *(uint *)(uVar2 + 4) | 0x100;
    if (((0x1f < local_4c) || (local_3c < 0x2580)) ||
       ((local_58[0] < 0 || (((0x11 < local_58[0] || (local_58[0] == 5)) || (local_58[0] == 9))))))
    {
      return 0xffffffea;
    }
    if ((local_58[0] != __src[6]) || (local_44 < 1)) {
      local_44 = *(int *)(uart_config + local_58[0] * 0xc + 4);
    }
    if (local_58[0] != 0) {
      uVar2 = 0;
      do {
        if (((__src != &isi_table + uVar2 * 0x2f) && ((&DAT_00015300)[uVar2 * 0x2f] == 0)) &&
           (((&DAT_00015258)[uVar2 * 0x2f] == local_50 && ((&DAT_00015268)[uVar2 * 0x2f] != 0)))) {
          return 0xffffff9e;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < 4);
    }
    if ((bVar4) && (1 < (int)__src[0xb])) {
      return 0xfffffff0;
    }
    __src[1] = local_3c;
    uVar2 = __src[4];
    __src[4] = uVar2 & 0xffff8000 | local_48 & 0x7fff;
    *(uint *)(param_1 + 0xc) =
         uVar2 & 0x3f8000 | local_48 & 0x7fff | *(uint *)(param_1 + 0xc) & 0xffc00000;
    __src[10] = local_40;
    *(short *)((int)__src + 0x36) = local_38;
    *(undefined2 *)(__src + 0xe) = local_30;
    iVar3 = 0x124;
    *(byte *)(*(int *)(param_1 + 0x18) + 0x124) =
         (byte)(*(uint *)(param_1 + 0xc) >> 10) & 8 |
         *(byte *)(*(int *)(param_1 + 0x18) + 0x124) & 0xf7;
    __src[9] = local_44;
    *(int *)(param_1 + 0x10) = local_44;
    if (__src[6] != 0) {
      iVar3 = 0;
      if (__src[2] != 0) {
        __release_region(&ioport_resource,__src[2],8);
        iVar3 = extraout_r1;
      }
    }
    __src[6] = local_58[0];
    if (bVar4) {
      shutdown(param_1,iVar3);
      __src[3] = local_4c;
      __src[2] = local_50;
      *(int *)(param_1 + 4) = local_50;
      __src[5] = local_34;
      *(int *)(param_1 + 8) = local_34;
      if (local_34 == 0) {
        if (*(int *)(param_1 + 0x74) != 1) goto LAB_000121e8;
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
      __src[0x2c] = uVar1;
      *(undefined4 *)(param_1 + 0x74) = uVar1;
    }
LAB_000121e8:
    if (__src[6] == 0) goto LAB_00012210;
    if (__src[2] != 0) {
      __request_region(&ioport_resource,__src[2],8,"serial(set)");
      goto LAB_00012210;
    }
  }
  if (__src[0xc] == 0) {
    return 0;
  }
LAB_00012228:
  if (__src[6] == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0xc) < 0) {
    if (((local_104 & 0x1030) == (__src[4] & 0x1030)) && (local_ec == __src[10])) {
      return 0;
    }
    if ((__src[4] & 0x1030) == 0x10) {
      *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x96c) = 0xe100;
    }
    if ((__src[4] & 0x1030) == 0x20) {
      *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x96c) = 0x1c200;
    }
    if ((__src[4] & 0x1030) == 0x1000) {
      *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x96c) = 0x38400;
    }
    if ((__src[4] & 0x1030) == 0x1010) {
      *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x96c) = 0x70800;
    }
    change_speed(param_1,0);
    return 0;
  }
  uVar1 = startup(param_1);
  return uVar1;
}



undefined4 get_lsr_info(int param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char in_NG;
  char in_ZR;
  char in_CY;
  char in_OV;
  byte in_Q;
  uint local_14;
  
  uVar1 = serial_in(param_1,5,param_3,
                    (uint)(byte)(in_NG << 4 | in_ZR << 3 | in_CY << 2 | in_OV << 1 | in_Q) << 0x1b |
                    0x80);
  local_14 = (uVar1 & 0xff) >> 6 & 1;
  if ((*(int *)(param_1 + 0x2c) != 0) ||
     (((*(int *)(param_1 + 100) - *(int *)(param_1 + 0x68) & 0xfffU) != 0 &&
      ((*(byte *)(*(int *)(param_1 + 0x18) + 0x124) & 0xc0) == 0)))) {
    local_14 = 0;
  }
  iVar3 = 4;
  uVar1 = *(uint *)(((uint)&local_14 & 0xffffe000) + 0xc);
  if (param_2 < 0xfffffffc && param_2 + 4 <= uVar1) {
    uVar1 = 0;
  }
  if (uVar1 == 0) {
    iVar3 = __arch_copy_to_user(param_2,&local_14,4);
  }
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xfffffff2;
  }
  return uVar2;
}



undefined4 get_modem_info(int param_1,uint param_2,undefined4 param_3)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  char in_NG;
  char in_ZR;
  char in_CY;
  char in_OV;
  byte in_Q;
  uint local_14;
  
  bVar1 = *(byte *)(param_1 + 0x3f);
  uVar2 = serial_in(param_1,6,param_3,
                    (uint)(byte)(in_NG << 4 | in_ZR << 3 | in_CY << 2 | in_OV << 1 | in_Q) << 0x1b |
                    0x80);
  if ((bVar1 & 2) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 4;
  }
  if ((bVar1 & 1) != 0) {
    uVar4 = uVar4 | 2;
  }
  local_14 = (uVar2 & 0x10) << 1 |
             (uVar2 & 0x20) << 3 |
             (uVar2 & 0x40) << 1 |
             (bVar1 & 8) << 0xb | (bVar1 & 4) << 0xb | uVar4 | ((uVar2 & 0xff) >> 7) << 6;
  iVar5 = 4;
  uVar2 = *(uint *)(((uint)&local_14 & 0xffffe000) + 0xc);
  if (param_2 < 0xfffffffc && param_2 + 4 <= uVar2) {
    uVar2 = 0;
  }
  if (uVar2 == 0) {
    iVar5 = __arch_copy_to_user(param_2,&local_14,4);
  }
  if (iVar5 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0xfffffff2;
  }
  return uVar3;
}



undefined4 set_modem_info(int param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  char cVar7;
  byte in_Q;
  uint local_14;
  
  iVar5 = 4;
  uVar4 = *(uint *)(((uint)&local_14 & 0xffffe000) + 0xc);
  uVar2 = param_3 + 4;
  uVar3 = uVar2;
  if (param_3 < 0xfffffffc) {
    uVar3 = uVar2 - (uVar4 + 1);
  }
  if (param_3 < 0xfffffffc && uVar2 <= uVar4) {
    uVar4 = 0;
  }
  if (uVar4 == 0) {
    iVar5 = __arch_copy_from_user(&local_14,param_3,4);
  }
  else {
    __memzero(&local_14,4,uVar3);
  }
  if (iVar5 != 0) {
    return 0xfffffff2;
  }
  if (param_2 == 0x5417) {
    if ((local_14 & 4) != 0) {
      *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xfffffffd;
    }
    if ((local_14 & 2) != 0) {
      *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xfffffffe;
    }
    if ((local_14 & 0x2000) != 0) {
      *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xfffffffb;
    }
    if ((local_14 & 0x4000) != 0) {
      *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xfffffff7;
    }
    bVar6 = (local_14 & 0x8000) == 0;
    cVar7 = '\0';
    if (!bVar6) {
      uVar3 = *(uint *)(param_1 + 0x3c) & 0xffffffef;
LAB_00012660:
      cVar7 = '\0';
      *(uint *)(param_1 + 0x3c) = uVar3;
    }
LAB_000126c0:
    serial_out(param_1,4,*(undefined4 *)(param_1 + 0x3c),
               (uint)(byte)(bVar6 << 3 | cVar7 << 2 | in_Q) << 0x1b | 0x80);
    uVar1 = 0;
  }
  else {
    if (param_2 < 0x5418) {
      if (param_2 == 0x5416) {
        if ((local_14 & 4) != 0) {
          *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) | 2;
        }
        if ((local_14 & 2) != 0) {
          *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) | 1;
        }
        if ((local_14 & 0x2000) != 0) {
          *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) | 4;
        }
        if ((local_14 & 0x4000) != 0) {
          *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) | 8;
        }
        cVar7 = '\0';
        bVar6 = (local_14 & 0x8000) == 0;
        if (!bVar6) {
          uVar3 = *(uint *)(param_1 + 0x3c) | 0x10;
          goto LAB_00012660;
        }
        goto LAB_000126c0;
      }
    }
    else if (param_2 == 0x5418) {
      *(uint *)(param_1 + 0x3c) =
           local_14 >> 1 & 1 |
           local_14 >> 0xb & 0x10 |
           local_14 >> 0xb & 8 |
           local_14 >> 0xb & 4 | local_14 >> 1 & 2 | *(uint *)(param_1 + 0x3c) & 0xffffffe0;
      bVar6 = true;
      cVar7 = '\x01';
      goto LAB_000126c0;
    }
    uVar1 = 0xffffffea;
  }
  return uVar1;
}



undefined4 do_autoconfig(int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = (uint)&stack0xfffffff8 & 0xffffe000;
  if ((*(uint *)(uVar2 + 0x1d0) & 0x200000) == 0) {
    return 0xffffffff;
  }
  *(uint *)(uVar2 + 4) = *(uint *)(uVar2 + 4) | 0x100;
  if (1 < *(int *)(*(int *)(param_1 + 0x14) + 0x2c)) {
    return 0xfffffff0;
  }
  shutdown(param_1,param_2);
  autoconfig(*(undefined4 *)(param_1 + 0x14));
  iVar3 = *(int *)(param_1 + 0x14);
  if ((((*(uint *)(iVar3 + 0x10) & 0x80) != 0) &&
      (((*(int *)(iVar3 + 8) != 0 || (*(int *)(iVar3 + 0x30) != 0)) &&
       (*(int *)(*(int *)(param_1 + 0x14) + 0x18) != 0)))) && (iVar3 = detect_uart_irq(), 0 < iVar3)
     ) {
    *(int *)(*(int *)(param_1 + 0x14) + 0xc) = iVar3;
  }
  uVar1 = startup(param_1);
  return uVar1;
}



void isi_break(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x998);
  if ((*(int *)(iVar1 + 4) != 0) || (*(int *)(iVar1 + 0x6c) != 0)) {
    if (param_2 == -1) {
      uVar2 = *(uint *)(iVar1 + 0x40) | 0x40;
    }
    else {
      uVar2 = *(uint *)(iVar1 + 0x40) & 0xffffffbf;
    }
    *(uint *)(iVar1 + 0x40) = uVar2;
    serial_out(iVar1,3,*(undefined4 *)(iVar1 + 0x40));
  }
  return;
}



int exser_read_reg(undefined4 param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int extraout_r1;
  uint uVar4;
  uint uVar5;
  int extraout_r12;
  uint local_14;
  
  uVar4 = *param_2;
  uVar5 = *(uint *)(((uint)&local_14 & 0xffffe000) + 0xc);
  uVar2 = uVar4 + 8;
  uVar3 = uVar2;
  if (uVar4 < 0xfffffff8) {
    uVar3 = uVar2 - (uVar5 + 1);
  }
  if (uVar4 < 0xfffffff8 && uVar2 <= uVar5) {
    uVar5 = 0;
  }
  if (uVar5 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = -0xe;
  }
  if (iVar1 != 0) {
    return iVar1;
  }
  __get_user_4(param_2,uVar3);
  uVar3 = extraout_r1 + *(int *)(extraout_r12 + 0x6c);
  if (uVar3 < (high_memory + 0x800000U & 0xff800000)) {
    iVar1 = (*ixp425_pci_read)(uVar3,(~(1 << (uVar3 & 3)) & 0xfU) << 4 | 6,&local_14);
    if (iVar1 != 0) {
      local_14 = 0xff;
      goto LAB_000128d0;
    }
    local_14 = local_14 >> ((uVar3 & 3) << 3);
  }
  else {
    local_14 = (uint)*(byte *)(extraout_r1 + *(int *)(extraout_r12 + 0x6c));
  }
  local_14 = local_14 & 0xff;
LAB_000128d0:
  __put_user_4(param_2 + 1,local_14);
  return 0;
}



undefined4 exser_write_reg(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  uint extraout_r1;
  int extraout_r2;
  int extraout_r3;
  int extraout_r12;
  
  __get_user_4(param_2,param_2,param_1,param_2);
  __get_user_4(extraout_r3 + 4);
  uVar1 = extraout_r12 + *(int *)(extraout_r2 + 0x6c);
  if (uVar1 < (high_memory + 0x800000U & 0xff800000)) {
    ixp425_pci_write(uVar1,(~(1 << (uVar1 & 3)) & 0xfU) << 4 | 7,
                     (extraout_r1 & 0xff) << ((uVar1 & 3) << 3));
  }
  else {
    *(char *)(extraout_r12 + *(int *)(extraout_r2 + 0x6c)) = (char)extraout_r1;
  }
  return 0;
}



uint isi_ioctl(int param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  bool bVar6;
  undefined4 local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  piVar5 = *(int **)(param_1 + 0x998);
  bVar6 = 0x5452 < param_3;
  if (param_3 != 0x5453) {
    bVar6 = param_3 != 0x541e;
  }
  if ((((bVar6 && (param_3 != 0x5453 && param_3 != 0x541f)) &&
       (param_3 != 0x5458 && param_3 != 0x545c)) && (param_3 != 0x545d)) &&
     ((*(uint *)(param_1 + 0x114) & 2) != 0)) {
    return 0xfffffffb;
  }
  switch(param_3) {
  case 0x5415:
    uVar1 = get_modem_info(piVar5,param_4);
    break;
  case 0x5416:
  case 0x5417:
  case 0x5418:
    uVar1 = set_modem_info(piVar5,param_3,param_4);
    break;
  default:
    uVar1 = 0xfffffdfd;
    break;
  case 0x541e:
    uVar1 = get_serial_info(piVar5,param_4);
    break;
  case 0x541f:
    uVar1 = set_serial_info(piVar5,param_4);
    break;
  case 0x5453:
    uVar1 = do_autoconfig(piVar5);
    break;
  case 0x5454:
  case 0x5455:
    printk("TIOCSER?WILD ioctl obsolete, ignored.\n");
    goto LAB_00012f10;
  case 0x5458:
    iVar4 = 0x1ac;
    uVar1 = *(uint *)(((uint)&local_c0 & 0xffffe000) + 0xc);
    if (param_4 < 0xfffffe54 && param_4 + 0x1ac <= uVar1) {
      uVar1 = 0;
    }
    if (uVar1 == 0) {
LAB_00012e50:
      iVar4 = __arch_copy_to_user(param_4,piVar5,iVar4);
    }
    goto LAB_00012e5c;
  case 0x5459:
    uVar1 = get_lsr_info(piVar5,param_4);
    break;
  case 0x545c:
    iVar4 = piVar5[5];
    local_40 = *(int *)(iVar4 + 0x3c);
    local_3c = *(int *)(iVar4 + 0x40);
    local_38 = *(int *)(iVar4 + 0x44);
    local_34 = *(int *)(iVar4 + 0x48);
    local_30 = *(undefined4 *)(iVar4 + 0x4c);
    uStack_2c = *(undefined4 *)(iVar4 + 0x50);
    uStack_28 = *(undefined4 *)(iVar4 + 0x54);
    uStack_24 = *(undefined4 *)(iVar4 + 0x58);
    local_20 = *(undefined4 *)(iVar4 + 0x5c);
    uStack_1c = *(undefined4 *)(iVar4 + 0x60);
    uStack_18 = *(undefined4 *)(iVar4 + 100);
    piVar5[0xe] = piVar5[0xe] | 8;
    serial_out(piVar5,1);
    iVar4 = local_40;
    do {
      local_40 = iVar4;
      interruptible_sleep_on(piVar5 + 0x27);
      if (*(int *)(((uint)&local_c0 & 0xffffe000) + 8) != 0) {
        return 0xfffffe00;
      }
      iVar4 = piVar5[5];
      local_6c = *(int *)(iVar4 + 0x3c);
      local_68 = *(int *)(iVar4 + 0x40);
      local_64 = *(int *)(iVar4 + 0x44);
      local_60 = *(int *)(iVar4 + 0x48);
      local_5c = *(undefined4 *)(iVar4 + 0x4c);
      local_58 = *(undefined4 *)(iVar4 + 0x50);
      local_54 = *(undefined4 *)(iVar4 + 0x54);
      local_50 = *(undefined4 *)(iVar4 + 0x58);
      local_4c = *(undefined4 *)(iVar4 + 0x5c);
      local_48 = *(undefined4 *)(iVar4 + 0x60);
      local_44 = *(undefined4 *)(iVar4 + 100);
      if (((local_64 == local_38) && (local_68 == local_3c)) &&
         ((local_60 == local_34 && (local_6c == local_40)))) {
        return 0xfffffffb;
      }
    } while (((((param_4 & 0x80) == 0) || (local_64 == local_38)) &&
             ((((param_4 & 0x100) == 0 || (local_68 == local_3c)) &&
              (((param_4 & 0x40) == 0 || (local_60 == local_34)))))) &&
            ((iVar4 = local_6c, local_3c = local_68, local_38 = local_64, local_34 = local_60,
             local_30 = local_5c, uStack_2c = local_58, uStack_28 = local_54, uStack_24 = local_50,
             local_20 = local_4c, uStack_1c = local_48, uStack_18 = local_44, (param_4 & 0x20) == 0
             || (iVar4 = local_6c, local_6c == local_40))));
    goto LAB_00012f10;
  case 0x545d:
    iVar4 = piVar5[5];
    local_bc = *(int *)(iVar4 + 0x3c);
    local_b8 = *(int *)(iVar4 + 0x40);
    local_b4 = *(int *)(iVar4 + 0x44);
    local_b0 = *(int *)(iVar4 + 0x48);
    local_a8 = *(undefined4 *)(iVar4 + 0x4c);
    local_ac = *(undefined4 *)(iVar4 + 0x50);
    local_a4 = *(undefined4 *)(iVar4 + 0x54);
    local_9c = *(undefined4 *)(iVar4 + 0x58);
    local_a0 = *(undefined4 *)(iVar4 + 0x5c);
    local_98 = *(undefined4 *)(iVar4 + 0x60);
    local_94 = *(undefined4 *)(iVar4 + 100);
    iVar4 = 0x50;
    uVar1 = *(uint *)(((uint)&local_c0 & 0xffffe000) + 0xc);
    if (param_4 < 0xffffffb0 && param_4 + 0x50 <= uVar1) {
      uVar1 = 0;
    }
    if (uVar1 == 0) {
      piVar5 = &local_bc;
      local_6c = local_bc;
      local_68 = local_b8;
      local_64 = local_b4;
      local_60 = local_b0;
      local_5c = local_a8;
      local_58 = local_ac;
      local_54 = local_a4;
      local_50 = local_9c;
      local_4c = local_a0;
      local_48 = local_98;
      local_44 = local_94;
      goto LAB_00012e50;
    }
LAB_00012e5c:
    if (iVar4 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0xfffffff2;
    }
    break;
  case 0x545f:
    uVar3 = *(uint *)(((uint)&local_c0 & 0xffffe000) + 0xc);
    uVar1 = param_4 + 8;
    uVar2 = uVar1;
    if (param_4 < 0xfffffff8) {
      uVar2 = uVar1 - (uVar3 + 1);
    }
    if (param_4 < 0xfffffff8 && uVar1 <= uVar3) {
      uVar3 = 0;
    }
    if (uVar3 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0xfffffff2;
    }
    if (uVar1 == 0) {
      uVar1 = exser_read_reg(piVar5,param_4,uVar2);
    }
    break;
  case 0x5460:
    uVar3 = *(uint *)(((uint)&local_c0 & 0xffffe000) + 0xc);
    uVar1 = param_4 + 8;
    uVar2 = uVar1;
    if (param_4 < 0xfffffff8) {
      uVar2 = uVar1 - (uVar3 + 1);
    }
    if (param_4 < 0xfffffff8 && uVar1 <= uVar3) {
      uVar3 = 0;
    }
    if (uVar3 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0xfffffff2;
    }
    if (uVar1 == 0) {
      uVar1 = exser_write_reg(piVar5,param_4,uVar2);
    }
    break;
  case 0x5461:
    uVar1 = (uint)(bEthernetLink0 == 1);
    break;
  case 0x5462:
    iVar4 = 4;
    uVar3 = *(uint *)(((uint)&local_c0 & 0xffffe000) + 0xc);
    uVar2 = param_4 + 4;
    uVar1 = uVar2;
    if (param_4 < 0xfffffffc) {
      uVar1 = uVar2 - (uVar3 + 1);
    }
    if (param_4 < 0xfffffffc && uVar2 <= uVar3) {
      uVar3 = 0;
    }
    if (uVar3 == 0) {
      iVar4 = __arch_copy_from_user(&local_c0,param_4,4);
    }
    else {
      __memzero(&local_c0,4,uVar1);
    }
    if (iVar4 != 0) {
      return 0xfffffff2;
    }
    reset_modem(local_c0,1);
LAB_00012f10:
    uVar1 = 0;
  }
  return uVar1;
}



void isi_set_termios(int param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  byte in_Q;
  uint in_cpsr;
  
  iVar3 = *(int *)(param_1 + 0x998);
  uVar4 = (*(uint **)(param_1 + 0x100))[2];
  if ((uVar4 == param_2[2]) && ((**(uint **)(param_1 + 0x100) & 0x1f) == (*param_2 & 0x1f))) {
    return;
  }
  change_speed(iVar3,param_2);
  if (((param_2[2] & 0x100f) != 0) && ((uVar4 & 0x100f) == 0)) {
    *(uint *)(iVar3 + 0x3c) = *(uint *)(iVar3 + 0x3c) & 0xfffffffc;
    in_cpsr = in_cpsr & 0xffffff00;
    serial_out(iVar3,4,*(undefined4 *)(iVar3 + 0x3c),(uint)(in_Q | 0xc) << 0x1b | 0x80);
    in_Q = (in_cpsr >> 0x1b & 1) != 0;
  }
  uVar1 = param_2[2];
  if (((uVar1 & 0x100f) != 0) || ((uVar4 & 0x100f) == 0)) goto LAB_0001305c;
  *(uint *)(iVar3 + 0x3c) = *(uint *)(iVar3 + 0x3c) | 1;
  iVar2 = *(int *)(*(int *)(param_1 + 0x100) + 8);
  bVar6 = iVar2 < 0;
  bVar7 = iVar2 == 0;
  bVar5 = true;
  if (bVar6) {
    uVar1 = uVar1 & 7;
    bVar5 = uVar1 == 0 || uVar1 != 0 && (bool)((byte)(1 >> 0x20 - uVar1) & 1);
    bVar7 = ((uint)*(byte *)(param_1 + 0x117) & 1 << uVar1) == 0;
    bVar6 = false;
    if (bVar7) goto LAB_0001302c;
  }
  else {
LAB_0001302c:
    *(uint *)(iVar3 + 0x3c) = *(uint *)(iVar3 + 0x3c) | 2;
  }
  serial_out(iVar3,4,*(undefined4 *)(iVar3 + 0x3c),
             (uint)(byte)(bVar6 << 4 | bVar7 << 3 | bVar5 << 2 | in_Q) << 0x1b | 0x80);
LAB_0001305c:
  if (((int)param_2[2] < 0) && (-1 < *(int *)(*(int *)(param_1 + 0x100) + 8))) {
    *(byte *)(param_1 + 0x124) = *(byte *)(param_1 + 0x124) & 0xbf;
    isi_start(param_1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void isi_close(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint __how;
  uint extraout_r1;
  uint extraout_r1_00;
  undefined4 uVar3;
  undefined4 uVar4;
  int __fd;
  int iVar5;
  undefined4 *puVar6;
  byte in_Q;
  
  __fd = *(int *)(param_1 + 0x998);
  if (__fd != 0) {
    iVar5 = *(int *)(__fd + 0x14);
    iVar1 = tty_hung_up_p(param_2,param_2,param_3,
                          (uint)(byte)((__fd < 0) << 4 | 4U | in_Q) << 0x1b | 0x80);
    if (iVar1 != 0) {
      _kmalloc = _kmalloc + -1;
      _kfree = _kfree | 8;
      return;
    }
    if ((*(int *)(param_1 + 0x118) == 1) && (*(int *)(iVar5 + 0x2c) != 1)) {
      printk("isi_close: bad serial port count; tty->count is 1, state->count is %d\n");
      *(undefined4 *)(iVar5 + 0x2c) = 1;
    }
    iVar1 = *(int *)(iVar5 + 0x2c) + -1;
    *(int *)(iVar5 + 0x2c) = iVar1;
    if (iVar1 < 0) {
      printk("isi_close: bad serial port count for ttyM%d: %d\n",*(undefined4 *)(__fd + 0x50));
      *(undefined4 *)(iVar5 + 0x2c) = 0;
    }
    if (*(int *)(iVar5 + 0x2c) != 0) {
      _kmalloc = _kmalloc + -1;
      _kfree = _kfree | 8;
      return;
    }
    *(uint *)(__fd + 0xc) = *(uint *)(__fd + 0xc) | 0x8000000;
    if ((*(uint *)(__fd + 0xc) & 0x20000000) != 0) {
      iVar1 = *(int *)(__fd + 0x14);
      puVar6 = *(undefined4 **)(param_1 + 0x100);
      uVar2 = puVar6[1];
      uVar3 = puVar6[2];
      uVar4 = puVar6[3];
      *(undefined4 *)(iVar1 + 0x68) = *puVar6;
      *(undefined4 *)(iVar1 + 0x6c) = uVar2;
      *(undefined4 *)(iVar1 + 0x70) = uVar3;
      *(undefined4 *)(iVar1 + 0x74) = uVar4;
      uVar2 = puVar6[5];
      uVar3 = puVar6[6];
      uVar4 = puVar6[7];
      *(undefined4 *)(iVar1 + 0x78) = puVar6[4];
      *(undefined4 *)(iVar1 + 0x7c) = uVar2;
      *(undefined4 *)(iVar1 + 0x80) = uVar3;
      *(undefined4 *)(iVar1 + 0x84) = uVar4;
      *(undefined4 *)(iVar1 + 0x88) = puVar6[8];
    }
    if ((*(uint *)(__fd + 0xc) & 0x40000000) != 0) {
      iVar1 = *(int *)(__fd + 0x14);
      puVar6 = *(undefined4 **)(param_1 + 0x100);
      uVar2 = puVar6[1];
      uVar3 = puVar6[2];
      uVar4 = puVar6[3];
      *(undefined4 *)(iVar1 + 0x8c) = *puVar6;
      *(undefined4 *)(iVar1 + 0x90) = uVar2;
      *(undefined4 *)(iVar1 + 0x94) = uVar3;
      *(undefined4 *)(iVar1 + 0x98) = uVar4;
      uVar2 = puVar6[5];
      uVar3 = puVar6[6];
      uVar4 = puVar6[7];
      *(undefined4 *)(iVar1 + 0x9c) = puVar6[4];
      *(undefined4 *)(iVar1 + 0xa0) = uVar2;
      *(undefined4 *)(iVar1 + 0xa4) = uVar3;
      *(undefined4 *)(iVar1 + 0xa8) = uVar4;
      *(undefined4 *)(iVar1 + 0xac) = puVar6[8];
    }
    *(byte *)(param_1 + 0x9a8) = *(byte *)(param_1 + 0x9a8) | 4;
    __how = (uint)*(ushort *)(__fd + 0x34);
    if (__how != 0xffff) {
      tty_wait_until_sent(param_1);
      __how = extraout_r1;
    }
    *(uint *)(__fd + 0x38) = *(uint *)(__fd + 0x38) & 0xfffffffb;
    *(uint *)(__fd + 0x1c) = *(uint *)(__fd + 0x1c) & 0xfffffffe;
    if (*(int *)(__fd + 0xc) < 0) {
      serial_out(__fd,1);
      isi_wait_until_sent(param_1,*(undefined4 *)(__fd + 0x24));
      __how = extraout_r1_00;
    }
    shutdown(__fd,__how);
    if (*(code **)(param_1 + 0xa0) != (code *)0x0) {
      (**(code **)(param_1 + 0xa0))(param_1);
    }
    if (*(code **)(param_1 + 0xd8) != (code *)0x0) {
      (**(code **)(param_1 + 0xd8))(param_1);
    }
    *(byte *)(param_1 + 0x9a8) = *(byte *)(param_1 + 0x9a8) & 0xfb;
    *(undefined4 *)(__fd + 0x48) = 0;
    *(undefined4 *)(__fd + 0x18) = 0;
    if (*(int *)(__fd + 0x54) != 0) {
      if (*(int *)(__fd + 0x30) != 0) {
        *(undefined4 *)((uint)&stack0xffffffe8 & 0xffffe000) = 1;
        schedule_timeout(*(undefined4 *)(__fd + 0x30));
      }
      __wake_up(__fd + 0x8c,1,1);
    }
    *(uint *)(__fd + 0xc) = *(uint *)(__fd + 0xc) & 0x97ffffff;
    __wake_up(__fd + 0x94,1,1);
    _kmalloc = _kmalloc + -1;
    _kfree = _kfree | 8;
  }
  return;
}



void isi_wait_until_sent(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = jiffies;
  iVar4 = *(int *)(param_1 + 0x998);
  if ((*(int *)(*(int *)(iVar4 + 0x14) + 0x18) != 0) && (*(int *)(iVar4 + 0x10) != 0)) {
    uVar2 = __divsi3(*(int *)(iVar4 + 0x24) + -2);
    uVar2 = uVar2 / 5;
    if (uVar2 == 0) {
      uVar2 = 1;
    }
    if (param_2 != 0 && param_2 < uVar2) {
      uVar2 = param_2;
    }
    if ((param_2 == 0) || (*(int *)(iVar4 + 0x24) * 2 < (int)param_2)) {
      param_2 = *(int *)(iVar4 + 0x24) << 1;
    }
    while (uVar3 = serial_in(iVar4,5), (uVar3 & 0x40) == 0) {
      *(undefined4 *)((uint)&stack0xffffffec & 0xffffe000) = 1;
      schedule_timeout(uVar2);
      if (*(int *)(((uint)&stack0xffffffec & 0xffffe000) + 8) != 0) {
        return;
      }
      if ((param_2 != 0) && ((int)((iVar1 + param_2) - jiffies) < 0)) {
        return;
      }
    }
  }
  return;
}



void isi_hangup(int param_1)

{
  int __how;
  int __fd;
  int iVar1;
  
  __fd = *(int *)(param_1 + 0x998);
  iVar1 = *(int *)(__fd + 0x14);
  isi_flush_buffer();
  if ((*(uint *)(__fd + 0xc) & 0x8000000) == 0) {
    shutdown(__fd,__how);
    *(undefined4 *)(__fd + 0x48) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = 0;
    *(uint *)(__fd + 0xc) = *(uint *)(__fd + 0xc) & 0x9fffffff;
    *(undefined4 *)(__fd + 0x18) = 0;
    __wake_up(__fd + 0x8c,1,1);
  }
  return;
}



int block_til_ready(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  int local_48 [3];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  local_48[1] = 0;
  local_3c = 0;
  local_38 = 0;
  local_48[2] = (uint)local_48 & 0xffffe000;
  local_34 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  iVar4 = *(int *)(param_3 + 0x14);
  bVar5 = false;
  uStack_30 = local_48[2];
  iVar1 = tty_hung_up_p(param_2);
  if (iVar1 == 0) {
    if ((*(uint *)(param_3 + 0xc) & 0x8000000) == 0) {
      if (*(short *)(param_1 + 0x1c) == 2) {
        if ((((*(uint *)(param_3 + 0xc) & 0x20000000) != 0) ||
            (((*(uint *)(param_3 + 0xc) & 0x40000100) == 0x40000100 &&
             (*(int *)(param_3 + 0x58) != *(int *)(((uint)local_48 & 0xffffe000) + 0x88))))) ||
           (((*(uint *)(param_3 + 0xc) & 0x40000200) == 0x40000200 &&
            (*(int *)(param_3 + 0x5c) != *(int *)(((uint)local_48 & 0xffffe000) + 0x80))))) {
          return -0x10;
        }
        uVar3 = *(uint *)(param_3 + 0xc) | 0x40000000;
      }
      else {
        if (((*(uint *)(param_2 + 0x18) & 0x800) == 0) && ((*(uint *)(param_1 + 0x114) & 2) == 0)) {
          if ((*(uint *)(param_3 + 0xc) & 0x40000000) == 0) {
            if ((*(uint *)(*(int *)(param_1 + 0x100) + 8) & 0x800) != 0) {
              bVar5 = true;
            }
          }
          else {
            bVar5 = (*(uint *)(iVar4 + 0x70) & 0x800) != 0;
          }
          local_48[0] = 0;
          add_wait_queue(param_3 + 0x8c,&local_34);
          iVar1 = tty_hung_up_p(param_2);
          if (iVar1 == 0) {
            *(int *)(iVar4 + 0x2c) = *(int *)(iVar4 + 0x2c) + -1;
          }
          *(int *)(param_3 + 0x54) = *(int *)(param_3 + 0x54) + 1;
          while( true ) {
            if (((*(uint *)(param_3 + 0xc) & 0x40000000) == 0) &&
               ((*(uint *)(*(int *)(param_1 + 0x100) + 8) & 0x100f) != 0)) {
              uVar3 = serial_in(param_3,4);
              serial_out(param_3,4,uVar3 | 3);
            }
            *(undefined4 *)((uint)local_48 & 0xffffe000) = 1;
            iVar2 = tty_hung_up_p(param_2);
            if ((iVar2 != 0) || (-1 < *(int *)(param_3 + 0xc))) break;
            if (((*(uint *)(param_3 + 0xc) & 0x48000000) == 0) &&
               ((bVar5 || (uVar3 = serial_in(param_3,6), (uVar3 & 0x80) != 0)))) goto LAB_00013748;
            if (*(int *)(((uint)local_48 & 0xffffe000) + 8) != 0) goto LAB_000136f4;
            schedule();
          }
          if ((*(uint *)(param_3 + 0xc) & 1) != 0) {
            local_48[0] = -0xb;
            goto LAB_00013748;
          }
LAB_000136f4:
          local_48[0] = -0x200;
LAB_00013748:
          *(undefined4 *)((uint)local_48 & 0xffffe000) = 0;
          remove_wait_queue(param_3 + 0x8c,&local_34);
          if (iVar1 == 0) {
            *(int *)(iVar4 + 0x2c) = *(int *)(iVar4 + 0x2c) + 1;
          }
          *(int *)(param_3 + 0x54) = *(int *)(param_3 + 0x54) + -1;
          if (local_48[0] != 0) {
            return local_48[0];
          }
        }
        else if ((*(uint *)(param_3 + 0xc) & 0x40000000) != 0) {
          return -0x10;
        }
        uVar3 = *(uint *)(param_3 + 0xc) | 0x20000000;
      }
      *(uint *)(param_3 + 0xc) = uVar3;
      return 0;
    }
  }
  else if ((*(uint *)(param_3 + 0xc) & 0x8000000) == 0) goto LAB_00013510;
  interruptible_sleep_on(param_3 + 0x94);
LAB_00013510:
  if ((*(uint *)(param_3 + 0xc) & 1) == 0) {
    iVar1 = -0x200;
  }
  else {
    iVar1 = -0xb;
  }
  return iVar1;
}



undefined4 get_isi_async_struct(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar1 = param_1 * 0xbc;
  (&DAT_0001527c)[param_1 * 0x2f] = (&DAT_0001527c)[param_1 * 0x2f] + 1;
  iVar3 = (&DAT_00015304)[param_1 * 0x2f];
  if (iVar3 == 0) {
    puVar2 = (undefined4 *)kmalloc(0x1ac,0x1f0);
    if (puVar2 == (undefined4 *)0x0) {
      (&DAT_0001527c)[param_1 * 0x2f] = (&DAT_0001527c)[param_1 * 0x2f] + -1;
      return 0xfffffff4;
    }
    __memzero(puVar2,0x1ac);
    puVar2[0x23] = puVar2 + 0x23;
    puVar2[0x24] = puVar2 + 0x23;
    puVar2[0x25] = puVar2 + 0x25;
    puVar2[0x26] = puVar2 + 0x25;
    puVar2[0x27] = puVar2 + 0x27;
    puVar2[0x28] = puVar2 + 0x27;
    *puVar2 = 0x5301;
    puVar2[1] = (&DAT_00015258)[param_1 * 0x2f];
    puVar2[3] = *(undefined4 *)(&DAT_00015260 + iVar1);
    puVar2[0x1d] = (&DAT_00015300)[param_1 * 0x2f];
    puVar2[0x1b] = (&DAT_00015280)[param_1 * 0x2f];
    *(undefined2 *)(puVar2 + 0x1c) = *(undefined2 *)(&DAT_00015284 + iVar1);
    puVar2[4] = *(undefined4 *)(&DAT_00015274 + iVar1);
    puVar2[0x14] = param_1;
    puVar2[0x21] = do_softint;
    puVar2[0x22] = puVar2;
    puVar2[5] = &isi_table + param_1 * 0x2f;
    if ((&DAT_00015304)[param_1 * 0x2f] == 0) {
      (&DAT_00015304)[param_1 * 0x2f] = puVar2;
      *param_2 = (int)puVar2;
      return 0;
    }
    kfree(puVar2);
    iVar3 = (&DAT_00015304)[param_1 * 0x2f];
  }
  *param_2 = iVar3;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int isi_open(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  char in_NG;
  char in_ZR;
  char in_CY;
  char in_OV;
  byte in_Q;
  int local_10;
  
  uVar1 = (uint)*(byte *)(param_1 + 0x111) - (int)*(short *)(param_1 + 0x16);
  if (uVar1 < 4) {
    _kmalloc = _kmalloc + 1;
    _kfree = _kfree | 0x18;
    iVar2 = get_isi_async_struct
                      (uVar1,&local_10,
                       (uint)(byte)(in_NG << 4 | in_ZR << 3 | in_CY << 2 | in_OV << 1 | in_Q) <<
                       0x1b);
    if (iVar2 == 0) {
      *(int *)(param_1 + 0x998) = local_10;
      *(int *)(local_10 + 0x18) = param_1;
      *(byte *)(*(int *)(local_10 + 0x18) + 0x124) =
           (byte)(*(uint *)(local_10 + 0xc) >> 10) & 8 |
           *(byte *)(*(int *)(local_10 + 0x18) + 0x124) & 0xf7;
      iVar2 = tmp_buf;
      if (tmp_buf == 0) {
        iVar2 = get_zeroed_page(0x1f0);
        if (iVar2 == 0) {
          return -0xc;
        }
        if (tmp_buf != 0) {
          free_pages(iVar2,0);
          iVar2 = tmp_buf;
        }
      }
      tmp_buf = iVar2;
      iVar2 = tty_hung_up_p(param_2);
      if ((iVar2 == 0) && ((*(uint *)(local_10 + 0xc) & 0x8000000) == 0)) {
        iVar2 = startup(local_10);
        if ((iVar2 == 0) && (iVar2 = block_til_ready(param_1,param_2,local_10), iVar2 == 0)) {
          iVar2 = *(int *)(local_10 + 0x14);
          if ((*(int *)(iVar2 + 0x2c) == 1) && ((*(uint *)(local_10 + 0xc) & 8) != 0)) {
            if (*(short *)(param_1 + 0x1c) == 1) {
              puVar6 = *(undefined4 **)(param_1 + 0x100);
              uVar3 = *(undefined4 *)(iVar2 + 0x6c);
              uVar4 = *(undefined4 *)(iVar2 + 0x70);
              uVar5 = *(undefined4 *)(iVar2 + 0x74);
              *puVar6 = *(undefined4 *)(iVar2 + 0x68);
              puVar6[1] = uVar3;
              puVar6[2] = uVar4;
              puVar6[3] = uVar5;
              uVar3 = *(undefined4 *)(iVar2 + 0x7c);
              uVar4 = *(undefined4 *)(iVar2 + 0x80);
              uVar5 = *(undefined4 *)(iVar2 + 0x84);
              puVar6[4] = *(undefined4 *)(iVar2 + 0x78);
              puVar6[5] = uVar3;
              puVar6[6] = uVar4;
              puVar6[7] = uVar5;
              puVar6[8] = *(undefined4 *)(iVar2 + 0x88);
            }
            else {
              iVar2 = *(int *)(local_10 + 0x14);
              puVar6 = *(undefined4 **)(param_1 + 0x100);
              uVar3 = *(undefined4 *)(iVar2 + 0x90);
              uVar4 = *(undefined4 *)(iVar2 + 0x94);
              uVar5 = *(undefined4 *)(iVar2 + 0x98);
              *puVar6 = *(undefined4 *)(iVar2 + 0x8c);
              puVar6[1] = uVar3;
              puVar6[2] = uVar4;
              puVar6[3] = uVar5;
              uVar3 = *(undefined4 *)(iVar2 + 0xa0);
              uVar4 = *(undefined4 *)(iVar2 + 0xa4);
              uVar5 = *(undefined4 *)(iVar2 + 0xa8);
              puVar6[4] = *(undefined4 *)(iVar2 + 0x9c);
              puVar6[5] = uVar3;
              puVar6[6] = uVar4;
              puVar6[7] = uVar5;
              puVar6[8] = *(undefined4 *)(iVar2 + 0xac);
            }
            change_speed(local_10,0);
          }
          *(undefined4 *)(local_10 + 0x58) = *(undefined4 *)(((uint)&local_10 & 0xffffe000) + 0x88);
          *(undefined4 *)(local_10 + 0x5c) = *(undefined4 *)(((uint)&local_10 & 0xffffe000) + 0x80);
          _set_bit_be(5,param_1 + 0x114);
          iVar2 = 0;
        }
      }
      else {
        if ((*(uint *)(local_10 + 0xc) & 0x8000000) != 0) {
          interruptible_sleep_on(local_10 + 0x94);
        }
        if ((*(uint *)(local_10 + 0xc) & 1) == 0) {
          iVar2 = -0x200;
        }
        else {
          iVar2 = -0xb;
        }
      }
    }
    else {
      _kmalloc = _kmalloc + -1;
      _kfree = _kfree | 8;
    }
  }
  else {
    _kfree = _kfree | 0x18;
    iVar2 = -0x13;
  }
  return iVar2;
}



int isi_read_proc(char *param_1,undefined4 *param_2,int param_3,int param_4,undefined4 *param_5)

{
  int iVar1;
  uint uVar2;
  byte bVar5;
  undefined4 uVar3;
  int iVar4;
  int iVar6;
  undefined4 *puVar7;
  char *__s;
  int local_208;
  uint local_204;
  char acStack_1f0 [32];
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1b8;
  undefined4 local_1a8;
  undefined4 local_164;
  undefined2 local_160;
  undefined4 local_15c;
  
  local_208 = 0;
  iVar1 = sprintf(param_1,"serinfo:1.0 driver:%s%s revision:%s\n",serial_version,&DAT_00015868,
                  serial_revdate);
  local_204 = 0;
  if (iVar1 < 4000) {
    do {
      __s = param_1 + iVar1;
      iVar4 = local_204 * 0xbc;
      puVar7 = (undefined4 *)(&DAT_00015304)[local_204 * 0x2f];
      if ((&DAT_00015268)[local_204 * 0x2f] == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = (&DAT_00015258)[local_204 * 0x2f];
        if (iVar6 == 0) {
          iVar6 = (&DAT_00015280)[local_204 * 0x2f];
        }
        iVar6 = sprintf(__s,"%d: uart:%s port:%lX irq:%d",(&DAT_0001526c)[local_204 * 0x2f],
                        *(undefined4 *)(uart_config + (&DAT_00015268)[local_204 * 0x2f] * 0xc),iVar6
                        ,*(undefined4 *)(&DAT_0001525c + iVar4));
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = &local_1d0;
          local_1d0 = 0x5301;
          local_1cc = (&DAT_00015258)[local_204 * 0x2f];
          local_1c4 = *(undefined4 *)(&DAT_00015260 + iVar4);
          local_1c8 = *(undefined4 *)(&DAT_00015264 + iVar4);
          local_15c = (&DAT_00015300)[local_204 * 0x2f];
          local_164 = (&DAT_00015280)[local_204 * 0x2f];
          local_160 = *(undefined2 *)(&DAT_00015284 + iVar4);
          local_1a8 = 0;
          local_1b8 = 0;
        }
        uVar2 = serial_in(puVar7,6);
        if (puVar7 == &local_1d0) {
          bVar5 = serial_in(puVar7,4);
        }
        else {
          bVar5 = *(byte *)((int)puVar7 + 0x3f);
        }
        acStack_1f0[0] = '\0';
        acStack_1f0[1] = 0;
        if ((bVar5 & 2) != 0) {
          strcat(acStack_1f0,"|RTS");
        }
        if ((uVar2 & 0x10) != 0) {
          strcat(acStack_1f0,"|CTS");
        }
        if ((bVar5 & 1) != 0) {
          strcat(acStack_1f0,"|DTR");
        }
        if ((uVar2 & 0x20) != 0) {
          strcat(acStack_1f0,"|DSR");
        }
        if ((uVar2 & 0x80) != 0) {
          strcat(acStack_1f0,"|CD");
        }
        if ((uVar2 & 0x40) != 0) {
          strcat(acStack_1f0,"|RI");
        }
        if (puVar7[10] != 0) {
          uVar3 = __divsi3(*(undefined4 *)(&DAT_00015254 + iVar4));
          iVar4 = sprintf(__s + iVar6," baud:%d",uVar3);
          iVar6 = iVar6 + iVar4;
        }
        iVar4 = sprintf(__s + iVar6," tx:%d rx:%d",(&DAT_0001529c)[local_204 * 0x2f],
                        (&DAT_000152a0)[local_204 * 0x2f]);
        iVar6 = iVar6 + iVar4;
        if ((&DAT_000152a4)[local_204 * 0x2f] != 0) {
          iVar4 = sprintf(__s + iVar6," fe:%d");
          iVar6 = iVar6 + iVar4;
        }
        if ((&DAT_000152a8)[local_204 * 0x2f] != 0) {
          iVar4 = sprintf(__s + iVar6," pe:%d");
          iVar6 = iVar6 + iVar4;
        }
        if ((&DAT_000152b0)[local_204 * 0x2f] != 0) {
          iVar4 = sprintf(__s + iVar6," brk:%d");
          iVar6 = iVar6 + iVar4;
        }
        if ((&DAT_000152ac)[local_204 * 0x2f] != 0) {
          iVar4 = sprintf(__s + iVar6," oe:%d");
          iVar6 = iVar6 + iVar4;
        }
        iVar4 = sprintf(__s + iVar6," %s\n",acStack_1f0 + 1);
        iVar6 = iVar6 + iVar4;
      }
      iVar1 = iVar1 + iVar6;
      iVar4 = iVar1 + local_208;
      if (param_3 + param_4 < iVar4) goto LAB_00013e5c;
      if (iVar4 < param_3) {
        iVar1 = 0;
        local_208 = iVar4;
      }
      local_204 = local_204 + 1;
    } while (local_204 < 4 && iVar1 < 4000);
  }
  *param_5 = 1;
LAB_00013e5c:
  if (param_3 < iVar1 + local_208) {
    *param_2 = param_1 + (param_3 - local_208);
    param_3 = (local_208 + iVar1) - param_3;
    if (param_3 < param_4) {
      param_4 = param_3;
    }
  }
  else {
    param_4 = 0;
  }
  return param_4;
}



void show_serial_version(void)

{
  printk("<6>%s version %s%s (%s) with%s",serial_name,serial_version,&DAT_00015868,serial_revdate,
         serial_options);
  return;
}



int detect_uart_irq(int param_1)

{
  undefined1 uVar3;
  undefined1 uVar4;
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar5;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1b8;
  int local_1b0;
  undefined4 local_158;
  undefined2 uStack_154;
  undefined4 local_150;
  
  local_1c4 = 0x5301;
  local_1c0 = *(undefined4 *)(param_1 + 8);
  local_1b8 = *(undefined4 *)(param_1 + 0x10);
  local_150 = *(undefined4 *)(param_1 + 0xb0);
  local_158 = *(undefined4 *)(param_1 + 0x30);
  uStack_154 = *(undefined2 *)(param_1 + 0x34);
  local_1b0 = param_1;
  probe_irq_on();
  probe_irq_off();
  uVar3 = serial_in(&local_1c4,4);
  uVar4 = serial_in(&local_1c4,1);
  serial_out(&local_1c4,4,0xc);
  uVar1 = probe_irq_on();
  serial_out(&local_1c4,4,0);
  __const_delay(0x4188e);
  if ((*(uint *)(param_1 + 0x10) & 2) == 0) {
    uVar5 = 0xb;
  }
  else {
    uVar5 = 3;
  }
  serial_out(&local_1c4,4,uVar5);
  serial_out(&local_1c4,1,0xf);
  serial_in(&local_1c4,5);
  serial_in(&local_1c4,0);
  serial_in(&local_1c4,2);
  serial_in(&local_1c4,6);
  serial_out(&local_1c4,0,0xff);
  __const_delay(0x8311c);
  iVar2 = probe_irq_off(uVar1);
  serial_out(&local_1c4,4,uVar3);
  serial_out(&local_1c4,1,uVar4);
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  return iVar2;
}



void autoconfig(int param_1)

{
  undefined1 uVar2;
  char cVar3;
  char cVar4;
  uint uVar1;
  undefined4 uVar5;
  undefined4 local_1c8;
  int local_1c4;
  undefined4 local_1bc;
  int local_1b4;
  undefined4 local_15c;
  undefined2 local_158;
  undefined4 local_154;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((*(int *)(param_1 + 8) == 0) && (*(int *)(param_1 + 0x30) == 0)) {
    return;
  }
  local_1c8 = 0x5301;
  local_1c4 = *(int *)(param_1 + 8);
  local_1bc = *(undefined4 *)(param_1 + 0x10);
  local_154 = *(undefined4 *)(param_1 + 0xb0);
  local_15c = *(undefined4 *)(param_1 + 0x30);
  local_158 = *(undefined2 *)(param_1 + 0x34);
  local_1b4 = param_1;
  if (((*(uint *)(param_1 + 0x10) & 0x4000) == 0) && (*(int *)(param_1 + 0x30) == 0)) {
    uVar2 = serial_in(&local_1c8,1);
    serial_out(&local_1c8,1,0);
    cVar3 = serial_in(&local_1c8,1);
    serial_out(&local_1c8,1,0xf);
    cVar4 = serial_in(&local_1c8,1);
    serial_out(&local_1c8,1,uVar2);
    if (cVar4 != '\x0f' || cVar3 != '\0') {
      return;
    }
  }
  uVar2 = serial_in(&local_1c8,4);
  serial_in(&local_1c8,3);
  serial_out(&local_1c8,3,0xbf);
  serial_out(&local_1c8,2,0);
  serial_out(&local_1c8,3,0);
  serial_out(&local_1c8,2,1);
  uVar1 = serial_in(&local_1c8,2);
  switch(uVar1 >> 6 & 0xff) {
  case 0:
    uVar5 = 2;
    break;
  case 1:
    uVar5 = 0;
    break;
  case 2:
    uVar5 = 3;
    break;
  case 3:
    uVar5 = 4;
    break;
  default:
    goto switchD_00014240_default;
  }
  *(undefined4 *)(param_1 + 0x18) = uVar5;
switchD_00014240_default:
  *(undefined4 *)(param_1 + 0x18) = 5;
  *(undefined4 *)(param_1 + 0x24) =
       *(undefined4 *)(uart_config + *(int *)(param_1 + 0x18) * 0xc + 4);
  if (*(int *)(param_1 + 0x18) != 0) {
    if (local_1c4 != 0) {
      __request_region(&ioport_resource,local_1c4,8,"serial(auto)");
    }
    serial_out(&local_1c8,4,uVar2);
    serial_out(&local_1c8,2,7);
    serial_out(&local_1c8,2,0);
    serial_in(&local_1c8,0);
    serial_out(&local_1c8,1,0);
  }
  return;
}



void printk_pnp_dev_id(uint param_1,uint param_2)

{
  printk("%c%c%c%x%x%x%x",((param_1 & 0xffff) >> 2 & 0x3f) + 0x40,
         ((param_1 & 3) << 3 | (param_1 & 0xffff) >> 0xd) + 0x40,
         ((param_1 & 0xffff) >> 8 & 0x1f) + 0x40,(param_2 & 0xffff) >> 4 & 0xf,param_2 & 0xf,
         (param_2 & 0xffff) >> 0xc,(param_2 & 0xffff) >> 8 & 0xf);
  return;
}



void get_pci_port(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (mtsi_upci_bar == 0 && param_4 == 0) {
    mtsi_upci_bar = *(int *)(param_1 + 0x60);
  }
  iVar1 = *(int *)(param_2 + 0x18);
  iVar2 = *(int *)(param_1 + 0x60);
  *(undefined1 *)(param_3 + 0x22) = 2;
  iVar2 = iVar1 * param_4 + iVar2;
  if (0x3fffffe < iVar2 + 0xb8000000U && iVar2 != 0x4bffffff) {
    iVar2 = __ioremap(iVar2,*(undefined4 *)(param_2 + 0xc),0);
  }
  *(int *)(param_3 + 0x2c) = iVar2;
  *(undefined2 *)(param_3 + 0x30) = *(undefined2 *)(param_2 + 0x12);
  *(undefined4 *)(param_3 + 8) = 0;
  return;
}



undefined4 get_pci_irq(int param_1,uint *param_2,int param_3)

{
  int iVar1;
  
  if ((*param_2 & 0x400) != 0) {
    iVar1 = (int)(*param_2 & 0x70) >> 4;
    if ((*param_2 & 0x200) != 0) {
      iVar1 = iVar1 + param_3;
    }
    return *(undefined4 *)(param_1 + iVar1 * 0x1c + 0x1e8);
  }
  return *(undefined4 *)(param_1 + 0x58);
}



void start_pci_pnp_board(int param_1,undefined4 *param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 auStack_5c [12];
  undefined4 local_50;
  undefined4 local_4c;
  
  if ((*(code **)(param_1 + 0x28c) == (code *)0x0) ||
     (iVar1 = (**(code **)(param_1 + 0x28c))(), -1 < iVar1)) {
    if ((*(code **)(param_1 + 0x290) == (code *)0x0) ||
       (iVar1 = (**(code **)(param_1 + 0x290))(param_1), -1 < iVar1)) {
      if (((code *)param_2[5] != (code *)0x0) &&
         (iVar1 = (*(code *)param_2[5])(param_1,param_2,1), iVar1 != 0)) {
        return;
      }
      if ((*(int *)(param_1 + 0x294) != 0) || (param_2[5] != 0)) {
        iVar1 = 0;
        while (*(int *)(serial_pci_board + iVar1 * 0x20 + 0x1c) != 0) {
          iVar1 = iVar1 + 1;
          if (0 < iVar1) {
            return;
          }
        }
        if (0 < iVar1) {
          return;
        }
        iVar1 = iVar1 * 0x20;
        uVar4 = param_2[1];
        uVar5 = param_2[2];
        uVar6 = param_2[3];
        *(undefined4 *)(serial_pci_board + iVar1) = *param_2;
        *(undefined4 *)(serial_pci_board + iVar1 + 4) = uVar4;
        *(undefined4 *)(serial_pci_board + iVar1 + 8) = uVar5;
        *(undefined4 *)(serial_pci_board + iVar1 + 0xc) = uVar6;
        uVar4 = param_2[5];
        uVar5 = param_2[6];
        *(undefined4 *)(serial_pci_board + iVar1 + 0x10) = param_2[4];
        *(undefined4 *)(serial_pci_board + iVar1 + 0x14) = uVar4;
        *(undefined4 *)(serial_pci_board + iVar1 + 0x18) = uVar5;
        *(int *)(serial_pci_board + iVar1 + 0x1c) = param_1;
      }
      iVar1 = param_2[2];
      if (iVar1 == 0) {
        iVar1 = 0xe1000;
      }
      __memzero(auStack_5c,0x3c);
      iVar7 = 0;
      if ((int)param_2[1] < 1) {
        return;
      }
      while( true ) {
        local_50 = get_pci_irq(param_1,param_2,iVar7);
        iVar3 = get_pci_port(param_1,param_2,auStack_5c,iVar7);
        if (iVar3 != 0) {
          return;
        }
        local_4c = 0x8040;
        iVar3 = register_serial(auStack_5c);
        if (iVar3 < 0) break;
        *(int *)(&DAT_00015254 + iVar3 * 0xbc) = iVar1;
        (&DAT_00015308)[iVar3 * 0x2f] = param_1;
        iVar7 = iVar7 + 1;
        if ((int)param_2[1] <= iVar7) {
          return;
        }
      }
      return;
    }
    printk("serial: PNP device \'");
    printk_pnp_dev_id(*(undefined2 *)(param_1 + 0x24),*(undefined2 *)(param_1 + 0x26));
    pcVar2 = "\' activate failed\n";
  }
  else {
    printk("serial: PNP device \'");
    printk_pnp_dev_id(*(undefined2 *)(param_1 + 0x24),*(undefined2 *)(param_1 + 0x26));
    pcVar2 = "\' prepare failed\n";
  }
  printk(pcVar2);
  return;
}



int serial_init_one(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 0x18);
  iVar1 = pci_enable_device();
  if (iVar1 == 0) {
    start_pci_pnp_board(param_1,pci_boards + iVar2 * 0x1c);
    iVar1 = 0;
  }
  return iVar1;
}



void serial_remove_one(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  do {
    if ((&DAT_00015308)[uVar2 * 0x2f] == param_1) {
      unregister_serial(uVar2);
      (&DAT_00015308)[uVar2 * 0x2f] = 0;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 4);
  iVar3 = 0;
  do {
    iVar1 = iVar3 * 0x20;
    if (*(int *)(serial_pci_board + iVar1 + 0x1c) == param_1) {
      if (*(code **)(serial_pci_board + iVar1 + 0x14) != (code *)0x0) {
        (**(code **)(serial_pci_board + iVar1 + 0x14))
                  (*(int *)(serial_pci_board + iVar1 + 0x1c),serial_pci_board + iVar1,0);
      }
      if (*(code **)(*(int *)(serial_pci_board + iVar1 + 0x1c) + 0x294) != (code *)0x0) {
        (**(code **)(*(int *)(serial_pci_board + iVar1 + 0x1c) + 0x294))();
      }
      *(undefined4 *)(serial_pci_board + iVar3 * 0x20 + 0x1c) = 0;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 1);
  return;
}



void probe_serial_pci(void)

{
  int iVar1;
  
  iVar1 = pci_register_driver(serial_pci_driver);
  if (iVar1 < 1) {
    if (iVar1 == 0) {
      iVar1 = -0x13;
    }
    pci_unregister_driver(serial_pci_driver);
  }
  else {
    iVar1 = 0;
  }
  if (iVar1 != 0) {
    serial_pci_driver._8_4_ = &DAT_00015868;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 isi_init(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  _DAT_ff00d00c = 0xbfff0003;
  resetlatch_cs3 = (undefined1 *)__ioremap(0x53000000,0x200,0);
  *resetlatch_cs3 = 0xff;
  modem_reset_bitmap = 0xffffffff;
  iVar5 = 0;
  do {
    *(undefined4 *)(modem_reset_timer + iVar5 * 4) = 0;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 8);
  init_bh(0xe,do_isi_serial_bh);
  iVar5 = 0;
  serial_timer._4_4_ = 0;
  serial_timer._0_4_ = 0;
  serial_timer._16_4_ = isi_timer;
  mod_timer(serial_timer,jiffies + 1000);
  reset_timer._4_4_ = 0;
  reset_timer._0_4_ = 0;
  reset_timer._16_4_ = modem_reset_timer_func;
  mod_timer(reset_timer,jiffies + 10);
  do {
    *(undefined4 *)(IRQ_ports + iVar5 * 4) = 0;
    *(undefined4 *)(IRQ_timeout + iVar5 * 4) = 0;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x20);
  show_serial_version();
  __memzero(serial_driver,0xbc);
  serial_driver._0_4_ = 0x5402;
  serial_driver._4_4_ = s_mtsi_upci_serial_00015c38;
  serial_driver._8_4_ = &DAT_00015c50;
  serial_driver._16_2_ = 0x1e;
  serial_driver._18_2_ = 0;
  serial_driver._12_4_ = 0;
  serial_driver._20_2_ = 4;
  serial_driver._22_2_ = 3;
  serial_driver._24_2_ = 1;
  serial_driver._28_4_ = tty_std_termios;
  serial_driver._32_4_ = _del_timer;
  serial_driver._40_4_ = _tty_unregister_driver;
  serial_driver._44_4_ = ___iounmap;
  serial_driver._48_4_ = _DAT_000160f4;
  serial_driver._52_4_ = _DAT_000160f8;
  serial_driver._56_4_ = _DAT_000160fc;
  serial_driver._60_4_ = _DAT_00016100;
  serial_driver._36_4_ = 0xcbd;
  serial_driver._64_4_ = 4;
  serial_driver._68_4_ = &serial_refcount;
  serial_driver._80_4_ = serial_table;
  serial_driver._84_4_ = serial_termios;
  serial_driver._88_4_ = serial_termios_locked;
  serial_driver._96_4_ = isi_open;
  serial_driver._100_4_ = isi_close;
  serial_driver._104_4_ = isi_write;
  serial_driver._108_4_ = isi_put_char;
  serial_driver._112_4_ = isi_flush_chars;
  serial_driver._116_4_ = isi_write_room;
  serial_driver._120_4_ = isi_chars_in_buffer;
  serial_driver._156_4_ = isi_flush_buffer;
  serial_driver._124_4_ = isi_ioctl;
  serial_driver._132_4_ = isi_throttle;
  serial_driver._136_4_ = isi_unthrottle;
  serial_driver._128_4_ = isi_set_termios;
  serial_driver._140_4_ = isi_stop;
  serial_driver._144_4_ = isi_start;
  serial_driver._148_4_ = isi_hangup;
  serial_driver._152_4_ = isi_break;
  serial_driver._168_4_ = isi_send_xchar;
  serial_driver._164_4_ = isi_wait_until_sent;
  serial_driver._172_4_ = isi_read_proc;
  memcpy(callout_driver,serial_driver,0xbc);
  callout_driver._8_4_ = &DAT_00015c58;
  callout_driver._16_2_ = 0x23;
  callout_driver._24_2_ = 2;
  callout_driver._172_4_ = 0;
  callout_driver._72_4_ = 0;
  iVar5 = tty_register_driver(serial_driver);
  if (iVar5 == 0) {
    iVar5 = tty_register_driver(callout_driver);
    if (iVar5 == 0) {
      uVar6 = 0;
      puVar7 = &isi_table;
      do {
        __memzero(puVar7,0xbc);
        *puVar7 = 0x5302;
        puVar7[7] = uVar6;
        puVar7[6] = 0;
        puVar7[10] = 0;
        *(undefined2 *)((int)puVar7 + 0x36) = 0x32;
        *(undefined2 *)(puVar7 + 0xe) = 3000;
        uVar3 = callout_driver._40_4_;
        uVar2 = callout_driver._36_4_;
        uVar1 = callout_driver._32_4_;
        puVar7[0x23] = callout_driver._28_4_;
        puVar7[0x24] = uVar1;
        puVar7[0x25] = uVar2;
        puVar7[0x26] = uVar3;
        uVar3 = callout_driver._56_4_;
        uVar2 = callout_driver._52_4_;
        uVar1 = callout_driver._48_4_;
        puVar7[0x27] = callout_driver._44_4_;
        puVar7[0x28] = uVar1;
        puVar7[0x29] = uVar2;
        puVar7[0x2a] = uVar3;
        puVar7[0x2b] = callout_driver._60_4_;
        uVar3 = serial_driver._40_4_;
        uVar2 = serial_driver._36_4_;
        uVar1 = serial_driver._32_4_;
        puVar7[0x1a] = serial_driver._28_4_;
        puVar7[0x1b] = uVar1;
        puVar7[0x1c] = uVar2;
        puVar7[0x1d] = uVar3;
        uVar3 = serial_driver._56_4_;
        uVar2 = serial_driver._52_4_;
        uVar1 = serial_driver._48_4_;
        puVar7[0x1e] = serial_driver._44_4_;
        puVar7[0x1f] = uVar1;
        puVar7[0x20] = uVar2;
        puVar7[0x21] = uVar3;
        puVar7[0x22] = serial_driver._60_4_;
        puVar7[0x12] = 0;
        puVar7[0x11] = 0;
        puVar7[0x10] = 0;
        puVar7[0xf] = 0;
        puVar7[0x13] = 0;
        puVar7[0x14] = 0;
        puVar7[0x16] = 0;
        puVar7[0x15] = 0;
        puVar7[0x18] = 0;
        puVar7[0x17] = 0;
        puVar7[0x2c] = 2;
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 0x2f;
      } while (uVar6 < 4);
      probe_serial_pci();
      return 0;
    }
    pcVar4 = "Couldn\'t register mtss\'s callout driver\n";
  }
  else {
    pcVar4 = "Couldn\'t register mtss\'s serial driver\n";
  }
                    // WARNING: Subroutine does not return
  panic(pcVar4);
}



void reset_modem(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint local_14;
  
  uVar1 = mtsi_upci_bar + 0x8d;
  if (uVar1 < (high_memory + 0x800000U & 0xff800000)) {
    iVar2 = (*ixp425_pci_read)(uVar1,(~(1 << (uVar1 & 3)) & 0xfU) << 4 | 6,&local_14);
    if (iVar2 == 0) {
      local_14 = local_14 >> ((uVar1 & 3) << 3);
      goto LAB_00014be0;
    }
    local_14 = 0xff;
  }
  else {
    local_14 = (uint)*(byte *)(mtsi_upci_bar + 0x8d);
LAB_00014be0:
    local_14 = local_14 & 0xff;
  }
  if (local_14 == 0x24) {
    switch(param_1) {
    case 0:
switchD_00014bf0_caseD_0:
      uVar1 = 0xfffffffe;
      break;
    case 1:
switchD_00014bf0_caseD_1:
      uVar1 = 0xfffffffb;
      break;
    case 2:
switchD_00014bf0_caseD_2:
      uVar1 = 0xffffffef;
      break;
    case 3:
switchD_00014bf0_caseD_3:
      uVar1 = 0xffffffbf;
      break;
    default:
      goto switchD_00014bf0_default;
    }
  }
  else {
    switch(param_1) {
    case 0:
      goto switchD_00014bf0_caseD_0;
    case 1:
      uVar1 = 0xfffffffd;
      break;
    case 2:
      goto switchD_00014bf0_caseD_1;
    case 3:
      uVar1 = 0xfffffff7;
      break;
    case 4:
      goto switchD_00014bf0_caseD_2;
    case 5:
      uVar1 = 0xffffffdf;
      break;
    case 6:
      goto switchD_00014bf0_caseD_3;
    case 7:
      uVar1 = 0xffffff7f;
      break;
    default:
      goto switchD_00014bf0_default;
    }
  }
  if (param_2 == 1) {
    modem_reset_bitmap = uVar1 & modem_reset_bitmap;
    uVar3 = jiffies;
  }
  else {
    modem_reset_bitmap = ~uVar1 | modem_reset_bitmap;
    uVar3 = 0;
  }
  *(undefined4 *)(modem_reset_timer + param_1 * 4) = uVar3;
  *resetlatch_cs3 = (undefined1)modem_reset_bitmap;
switchD_00014bf0_default:
  return;
}



undefined4 register_serial(int param_1)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar5 = *(undefined4 *)(param_1 + 8);
  uVar3 = 0;
  do {
    if (((&DAT_00015268)[uVar3 * 0x2f] == 0) && ((&DAT_0001527c)[uVar3 * 0x2f] == 0)) break;
    uVar3 = uVar3 + 1;
  } while (uVar3 < 4);
  if (uVar3 == 4) {
    pcVar2 = 
    "FIXME...Couldn\'t configure serial #%d (port=%ld,irq=%d): device already open or ports exceeded the limit\n"
    ;
  }
  else {
    iVar1 = uVar3 * 0xbc;
    if ((&DAT_0001527c)[uVar3 * 0x2f] == 0) {
      *(undefined4 *)(&DAT_0001525c + iVar1) = *(undefined4 *)(param_1 + 0xc);
      (&DAT_00015258)[uVar3 * 0x2f] = uVar5;
      *(undefined4 *)(&DAT_00015260 + iVar1) = *(undefined4 *)(param_1 + 0x10);
      (&DAT_00015300)[uVar3 * 0x2f] = (uint)*(byte *)(param_1 + 0x22);
      (&DAT_00015280)[uVar3 * 0x2f] = *(undefined4 *)(param_1 + 0x2c);
      *(undefined2 *)(&DAT_00015284 + iVar1) = *(undefined2 *)(param_1 + 0x30);
      if (*(int *)(param_1 + 0x1c) != 0) {
        *(int *)(&DAT_00015254 + iVar1) = *(int *)(param_1 + 0x1c);
      }
      iVar4 = (&DAT_00015304)[uVar3 * 0x2f];
      if (iVar4 != 0) {
        *(undefined4 *)(iVar4 + 4) = uVar5;
        *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(param_1 + 0x10);
        *(uint *)(iVar4 + 0x74) = (uint)*(byte *)(param_1 + 0x22);
        *(undefined4 *)(iVar4 + 0x6c) = *(undefined4 *)(param_1 + 0x2c);
        *(undefined2 *)(iVar4 + 0x70) = *(undefined2 *)(param_1 + 0x30);
      }
      autoconfig(&isi_table + uVar3 * 0x2f);
      if ((&DAT_00015268)[uVar3 * 0x2f] == 0) {
        printk("register_serial(): autoconfig failed\n");
        return 0xffffffff;
      }
      if (((*(uint *)(&DAT_00015260 + iVar1) & 0x80) != 0) &&
         (((&DAT_00015258)[uVar3 * 0x2f] != 0 || ((&DAT_00015280)[uVar3 * 0x2f] != 0)))) {
        uVar5 = detect_uart_irq(&isi_table + uVar3 * 0x2f);
        *(undefined4 *)(&DAT_0001525c + iVar1) = uVar5;
      }
      return (&DAT_0001526c)[uVar3 * 0x2f];
    }
    pcVar2 = "Couldn\'t configure serial #%d (port=%ld,irq=%d): device already open\n";
  }
  printk(pcVar2,uVar3,uVar5,*(undefined4 *)(param_1 + 0xc));
  return 0xffffffff;
}



void unregister_serial(int param_1)

{
  if (((&DAT_00015304)[param_1 * 0x2f] != 0) &&
     (*(int *)((&DAT_00015304)[param_1 * 0x2f] + 0x18) != 0)) {
    tty_hangup();
  }
  (&DAT_00015268)[param_1 * 0x2f] = 0;
  printk("<6>ttyM%d unloaded\n",(&DAT_0001526c)[param_1 * 0x2f]);
  return;
}



void isi_fini(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  del_timer(serial_timer);
  del_timer(reset_timer);
  remove_bh(0xe);
  iVar2 = tty_unregister_driver(serial_driver);
  if (iVar2 != 0) {
    printk("serial: failed to unregister serial driver (%d)\n",iVar2);
  }
  iVar2 = tty_unregister_driver(callout_driver);
  if (iVar2 != 0) {
    printk("serial: failed to unregister callout driver (%d)\n",iVar2);
  }
  uVar3 = 0;
  do {
    if ((&DAT_00015304)[uVar3 * 0x2f] != 0) {
      (&DAT_00015304)[uVar3 * 0x2f] = 0;
      kfree();
    }
    if (((&DAT_00015268)[uVar3 * 0x2f] != 0) && ((&DAT_00015258)[uVar3 * 0x2f] != 0)) {
      __release_region(&ioport_resource,(&DAT_00015258)[uVar3 * 0x2f],8);
    }
    iVar2 = (&DAT_00015280)[uVar3 * 0x2f];
    if ((iVar2 != 0) && (0x3fffffe < iVar2 + 0xb8000000U && iVar2 != 0x4bffffff)) {
      __iounmap();
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 4);
  iVar2 = 0;
  do {
    iVar1 = iVar2 * 0x20;
    if (*(int *)(serial_pci_board + iVar1 + 0x1c) != 0) {
      if (*(code **)(serial_pci_board + iVar1 + 0x14) != (code *)0x0) {
        (**(code **)(serial_pci_board + iVar1 + 0x14))
                  (*(int *)(serial_pci_board + iVar1 + 0x1c),serial_pci_board + iVar1,0);
      }
      if (*(code **)(*(int *)(serial_pci_board + iVar1 + 0x1c) + 0x294) != (code *)0x0) {
        (**(code **)(*(int *)(serial_pci_board + iVar1 + 0x1c) + 0x294))();
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 1);
  if (tmp_buf != 0) {
    tmp_buf = 0;
    free_pages();
  }
  if (*(char *)serial_pci_driver._8_4_ != '\0') {
    pci_unregister_driver();
  }
  return;
}



void init_module(void)

{
  isi_init();
  return;
}



void cleanup_module(void)

{
  isi_fini();
  return;
}


