//----- (000000014073EDB0) ----------------------------------------------------
__int64 __fastcall sub_14073EDB0(_QWORD* a1)
{
	__int64 v1; // rdi
	_QWORD* v2; // rax
	_QWORD* v3; // rsi
	__int64 v4; // rcx
	unsigned __int64 v5; // rax
	__int64 v6; // rbx
	__int64 v7; // rax
	int v8; // r10d
	_QWORD* v9; // rax
	__int64 v10; // r8
	__int64 v11; // rdx
	int v12; // r10d
	__int64(__fastcall * *v14)(); // [rsp+20h] [rbp-28h] BYREF
	int v15; // [rsp+28h] [rbp-20h]
	__int64 v16; // [rsp+30h] [rbp-18h]
	int v17; // [rsp+38h] [rbp-10h]

	v1 = (__int64)a1;
	v2 = (_QWORD*)sub_140056AB0(a1, 1u);
	v3 = v2;
	if (!v2 || !*v2)
	{
		*(_DWORD*)(*(_QWORD*)(v1 + 16) + 8i64) = 0;
		*(_QWORD*)(v1 + 16) += 16i64;
	}
	v4 = *(_QWORD*)(v1 + 32);
	v16 = v1;
	v14 = off_140B569F0;
	v5 = *(_QWORD*)(v4 + 112);
	v17 = 1;
	if (*(_QWORD*)(v4 + 120) >= v5)
		sub_14005E2C0(v1);
	v6 = *(_QWORD*)(v1 + 16);
	v7 = sub_14005C1B0(v1, 0, 0);
	*(_DWORD*)(v6 + 8) = 5;
	*(_QWORD*)v6 = v7;
	*(_QWORD*)(v1 + 16) += 16i64;
	v8 = sub_1400578C0(v1);
	v15 = v8;
	switch (*(_DWORD*)(*v3 + 76i64))
	{
	case 0:
	case 4:
	case 7:
		sub_1400FA9E0((__int64)&v14);
		sub_1400FA9E0((__int64)&v14);
		sub_1400FA9E0((__int64)&v14);
		goto LABEL_8;
	case 1:
	case 2:
	case 3:
	case 5:
	case 6:
	case 8:
	LABEL_8:
		sub_1400FA9E0((__int64)&v14);
		v8 = v15;
		v1 = v16;
		break;
	default:
		break;
	}
	v9 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v8);
	v10 = *(_QWORD*)(v1 + 16);
	*(_QWORD*)v10 = *v9;
	v11 = *((unsigned int*)v9 + 2);
	*(_DWORD*)(v10 + 8) = v11;
	*(_QWORD*)(v1 + 16) += 16i64;
	sub_1400579E0(v1, v11, v12);
	return 1i64;
}
// 14073EEE4: variable 'v12' is possibly undefined
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();

