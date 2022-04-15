//----- (00000001404EA090) ----------------------------------------------------
__int64 __fastcall sub_1404EA090(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // r9
	__int64 v4; // rbx
	__int64 v5; // rax
	__int64 v6; // rax
	__int64* v7; // rax
	__int64 v8; // rax
	__int64* v9; // rax
	__int64 v10; // rax
	__int64* v11; // rax
	__int64 v12; // rax
	__int64* v13; // rax
	__int64 v14; // rax
	__int64* v15; // rax
	__int64 v16; // rax
	__int64* v17; // rax
	__int64 v18; // rax
	__int64* v19; // rax
	__int64 v20; // rax
	__int64* v21; // rax
	__int64 v22; // rax
	__int64* v23; // rax
	__int64 v24; // rax
	__int64* v25; // rax
	__int64 v27; // [rsp+20h] [rbp-18h] BYREF
	int v28; // [rsp+28h] [rbp-10h]

	sub_140057020(a1, "AlienFxLib", &off_140B69AD0);
	v2 = sub_140062650((__int64)a1, (unsigned __int64*)"AlienFxLib", 0xAui64);
	v3 = a1[2];
	v27 = v2;
	v28 = 4;
	sub_14005E8E0((__int64)a1, (__int64)(a1 + 15), (int*)&v27, v3);
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"EnumDeviceTypes", 0xFui64);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v4 = a1[2];
	v5 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v4 + 8) = 5;
	*(_QWORD*)v4 = v5;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Unknown", 7ui64);
	v6 = a1[2];
	*(_QWORD*)v6 = 0i64;
	*(_DWORD*)(v6 + 8) = 3;
	a1[2] += 16i64;
	v7 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v7, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Notebook", 8ui64);
	v8 = a1[2];
	*(_QWORD*)v8 = 0x3FF0000000000000i64;
	*(_DWORD*)(v8 + 8) = 3;
	a1[2] += 16i64;
	v9 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v9, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Desktop", 7ui64);
	v10 = a1[2];
	*(_QWORD*)v10 = 0x4000000000000000i64;
	*(_DWORD*)(v10 + 8) = 3;
	a1[2] += 16i64;
	v11 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v11, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Server", 6ui64);
	v12 = a1[2];
	*(_QWORD*)v12 = 0x4008000000000000i64;
	*(_DWORD*)(v12 + 8) = 3;
	a1[2] += 16i64;
	v13 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v13, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Display", 7ui64);
	v14 = a1[2];
	*(_QWORD*)v14 = 0x4010000000000000i64;
	*(_DWORD*)(v14 + 8) = 3;
	a1[2] += 16i64;
	v15 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v15, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Mouse", 5ui64);
	v16 = a1[2];
	*(_QWORD*)v16 = 0x4014000000000000i64;
	*(_DWORD*)(v16 + 8) = 3;
	a1[2] += 16i64;
	v17 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v17, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Keyboard", 8ui64);
	v18 = a1[2];
	*(_QWORD*)v18 = 0x4018000000000000i64;
	*(_DWORD*)(v18 + 8) = 3;
	a1[2] += 16i64;
	v19 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v19, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Gamepad", 7ui64);
	v20 = a1[2];
	*(_QWORD*)v20 = 0x401C000000000000i64;
	*(_DWORD*)(v20 + 8) = 3;
	a1[2] += 16i64;
	v21 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v21, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Speaker", 7ui64);
	v22 = a1[2];
	*(_QWORD*)v22 = 0x4020000000000000i64;
	*(_DWORD*)(v22 + 8) = 3;
	a1[2] += 16i64;
	v23 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v23, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"Other", 5ui64);
	v24 = a1[2];
	*(_QWORD*)v24 = 0x406FE00000000000i64;
	*(_DWORD*)(v24 + 8) = 3;
	a1[2] += 16i64;
	v25 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v25, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 48i64;
	return 1i64;
}
// 140B69AD0: using guessed type char *off_140B69AD0;

