//----- (00000001400578C0) ----------------------------------------------------
__int64 __fastcall sub_1400578C0(__int64 a1)
{
	_DWORD* v2; // rax
	__int64* v4; // rax
	_QWORD* v5; // rax
	__int64 v6; // rdx
	__int64 v7; // rax
	int v8; // ecx
	__int64* v9; // rax
	unsigned int v10; // edi
	__int64* v11; // rax
	_QWORD* v12; // rax
	__int64 v13; // rdx
	__int64 v14; // [rsp+20h] [rbp-18h] BYREF
	int v15; // [rsp+28h] [rbp-10h]
	__int64 v16; // [rsp+50h] [rbp+18h] BYREF

	v2 = (_DWORD*)(*(_QWORD*)(a1 + 16) - 16i64);
	if (v2 != dword_140A12138 && !v2[2])
	{
		*(_QWORD*)(a1 + 16) = v2;
		return 0xFFFFFFFFi64;
	}
	v4 = (__int64*)sub_1400580E0(a1, -10000);
	v5 = sub_14005C3C0(*v4, 0);
	v6 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v6 = *v5;
	*(_DWORD*)(v6 + 8) = *((_DWORD*)v5 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	v7 = *(_QWORD*)(a1 + 16);
	v8 = *(_DWORD*)(v7 - 8);
	v9 = (__int64*)(v7 - 16);
	if (v8 != 3)
	{
		if (v8 != 4 || !sub_14005AC80((char*)(*v9 + 32), (unsigned __int64*)&v16))
		{
			v10 = 0;
			goto LABEL_9;
		}
		v15 = 3;
		v9 = &v14;
		v14 = v16;
	}
	v10 = (int)*(double*)v9;
LABEL_9:
	*(_QWORD*)(a1 + 16) -= 16i64;
	if (v10)
	{
		v11 = (__int64*)sub_1400580E0(a1, -10000);
		v12 = sub_14005C3C0(*v11, v10);
		v13 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v13 = *v12;
		*(_DWORD*)(v13 + 8) = *((_DWORD*)v12 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_140058B30(a1, -10000);
	}
	else
	{
		v10 = sub_1400585E0(a1, -10000) + 1;
	}
	sub_140058B30(a1, -10000);
	return v10;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

