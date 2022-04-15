//----- (0000000140052090) ----------------------------------------------------
__int64 __fastcall sub_140052090(__int64 a1, int a2, int a3, int a4)
{
	__int64 v4; // r13
	__int64 v5; // rbx
	__int64 v6; // rbp
	__int64 v7; // rcx
	unsigned __int64 v8; // r12
	unsigned __int64 v9; // r15
	int v10; // r14d
	int v11; // edi
	int v12; // esi
	__int64 result; // rax
	__int64 v14; // [rsp+20h] [rbp-38h] BYREF
	__int64 v15; // [rsp+28h] [rbp-30h]

	v4 = qword_140C63628;
	v5 = 0i64;
	v6 = a4;
	v7 = *(_QWORD*)(qword_140C63628 + 752);
	v8 = a3;
	v9 = a2;
	if (v7)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
		*(_QWORD*)(v4 + 752) = 0i64;
	}
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65848 + 136i64))(qword_140C65848);
	if ((_DWORD)v6)
	{
		if ((_DWORD)v6 == 1)
			v10 = 4;
		else
			v10 = 0;
	}
	else
	{
		v10 = 2;
	}
	switch ((int)v9)
	{
	case 1:
		v11 = 8;
		break;
	case 2:
		v11 = 128;
		break;
	case 3:
		v11 = 16;
		break;
	case 4:
		v11 = 256;
		break;
	case 5:
		v11 = 64;
		break;
	case 7:
		v11 = 32;
		break;
	default:
		v11 = 0;
		break;
	}
	v15 = 0i64;
	v14 = 0i64;
	v12 = v10 | v11 | sub_140051970(v8);
	if ((v9 & 0x80000000) == 0i64 && v9 < 0x17)
	{
		sub_140051A00(&v14, (__int64*)(v4 + 16 * (v9 + 51)), v12);
		v5 = v14;
	}
	if ((v8 & 0x80000000) == 0i64 && v8 < 0x11)
	{
		sub_140051A00(&v14, (__int64*)(v4 + 16 * (v8 + 74)), v12);
		v5 = v14;
	}
	if ((int)v6 >= 0)
	{
		sub_140051A00(&v14, (__int64*)(v4 + 16 * (v6 + 48)), v12);
		v5 = v14;
	}
	result = (*(__int64(__fastcall**)(__int64, __int64, __int64, _QWORD))(*(_QWORD*)qword_140C65848 + 16i64))(
		qword_140C65848,
		v4 + 752,
		v5,
		(unsigned int)v15);
	if (v5)
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v5 - 16) + 8i64))(v5 - 16);
	return result;
}
// 1400521C5: conditional instruction was optimized away because rbp.8>=FFFFFFFF80000000u
// 140C63628: using guessed type __int64 qword_140C63628;
// 140C65848: using guessed type __int64 qword_140C65848;

