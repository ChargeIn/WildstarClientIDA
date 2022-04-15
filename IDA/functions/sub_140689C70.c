//----- (0000000140689C70) ----------------------------------------------------
__int64 __fastcall sub_140689C70(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	unsigned int v4; // eax
	__int64 v5; // rdi
	__int64* v6; // rcx
	int v7; // edx
	__int64 v8; // rdx
	__int64 v9; // rax
	__int64 v10; // rax
	__int64 v12; // [rsp+20h] [rbp-18h] BYREF
	int v13; // [rsp+28h] [rbp-10h]
	__int64 v14; // [rsp+48h] [rbp+10h] BYREF

	if (!*(_QWORD*)(qword_140C65898 + 120)
		|| (v2 = sub_140056AB0(a1, 1u)) == 0
		|| (v3 = *(_QWORD*)(v2 + 8)) == 0
		|| (v4 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v3 + 8) + 32i64))(*(_QWORD*)(v3 + 8)),
			(v5 = sub_140498A40(qword_140C65980, v4, 0)) == 0))
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		goto LABEL_17;
	}
	v6 = (__int64*)dword_140A12138;
	if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
		v6 = (__int64*)(a1[3] + 16i64);
	v7 = *((_DWORD*)v6 + 2);
	if (v7 != 3)
	{
		if (v7 != 4 || !sub_14005AC80((char*)(*v6 + 32), (unsigned __int64*)&v14))
		{
			v8 = 0i64;
			goto LABEL_12;
		}
		v13 = 3;
		v6 = &v12;
		v12 = v14;
	}
	v8 = (unsigned int)(int)*(double*)v6;
LABEL_12:
	v9 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v5 + 144i64))(v5, v8);
	if (v9)
	{
		v10 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v9 + 320i64))(v9);
		return sub_140432D60(a1, v10);
	}
	*(_DWORD*)(a1[2] + 8i64) = 0;
LABEL_17:
	a1[2] += 16i64;
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65980: using guessed type __int64 qword_140C65980;

