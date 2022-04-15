//----- (000000014076B5C0) ----------------------------------------------------
__int64 __fastcall sub_14076B5C0(__int64 a1)
{
	__int64* v1; // rdx
	int v3; // edi
	int v4; // eax
	int v5; // edx
	__int64 v6; // r8
	__int64 v7; // r9
	__int64 v8; // rbx
	int v9; // eax
	_DWORD* v10; // rcx
	__int64 result; // rax
	__int64 v12; // [rsp+20h] [rbp-18h] BYREF
	int v13; // [rsp+28h] [rbp-10h]
	__int64 v14; // [rsp+40h] [rbp+8h] BYREF

	v1 = (__int64*)dword_140A12138;
	if (*(_QWORD*)(a1 + 24) < *(_QWORD*)(a1 + 16))
		v1 = *(__int64**)(a1 + 24);
	v3 = 0;
	v4 = *((_DWORD*)v1 + 2);
	if (v4 != 3)
	{
		if (v4 != 4 || !sub_14005AC80((char*)(*v1 + 32), (unsigned __int64*)&v14))
		{
			v5 = 0;
			goto LABEL_8;
		}
		v13 = 3;
		v1 = &v12;
		v12 = v14;
	}
	v5 = (int)*(double*)v1;
LABEL_8:
	v6 = *(_QWORD*)(qword_140C65898 + 27728);
	if (!v6
		|| !*(_QWORD*)(v6 + 96)
		|| (v7 = *(_QWORD*)(*(_QWORD*)(v6 + 88) + 8i64 * *(_QWORD*)(v6 + 104))) == 0
		|| *(_DWORD*)(v7 + 16) != *(_DWORD*)(v6 + 16)
		|| *(_QWORD*)(v7 + 24) != *(_QWORD*)(v6 + 24)
		|| (v8 = qword_140C65B98, !(unsigned int)sub_1405BED30(qword_140C65B98, v5))
		|| *(_QWORD*)(v8 + 208)
		|| *(_DWORD*)(v8 + 172)
		|| (v9 = 1, *(_DWORD*)(v8 + 180)))
	{
		v9 = 0;
	}
	v10 = *(_DWORD**)(a1 + 16);
	LOBYTE(v3) = v9 != 0;
	v10[2] = 1;
	result = 1i64;
	*v10 = v3;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B98: using guessed type __int64 qword_140C65B98;

