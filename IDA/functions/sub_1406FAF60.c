//----- (00000001406FAF60) ----------------------------------------------------
__int64 __fastcall sub_1406FAF60(__int64 a1)
{
	__int64* v1; // rbx
	__int64* v3; // rdx
	int v4; // edi
	int v5; // eax
	unsigned int v6; // ebp
	int v7; // eax
	int v8; // r8d
	int v9; // eax
	_DWORD* v10; // rcx
	__int64 result; // rax
	__int64 v12; // [rsp+20h] [rbp-18h] BYREF
	int v13; // [rsp+28h] [rbp-10h]
	__int64 v14; // [rsp+40h] [rbp+8h] BYREF

	v1 = (__int64*)dword_140A12138;
	v3 = (__int64*)dword_140A12138;
	if (*(_QWORD*)(a1 + 24) < *(_QWORD*)(a1 + 16))
		v3 = *(__int64**)(a1 + 24);
	v4 = 0;
	v5 = *((_DWORD*)v3 + 2);
	if (v5 == 3)
		goto LABEL_7;
	if (v5 == 4 && sub_14005AC80((char*)(*v3 + 32), (unsigned __int64*)&v14))
	{
		v13 = 3;
		v3 = &v12;
		v12 = v14;
	LABEL_7:
		v6 = (int)*(double*)v3;
		goto LABEL_8;
	}
	v6 = 0;
LABEL_8:
	if ((unsigned __int64)(*(_QWORD*)(a1 + 24) + 16i64) < *(_QWORD*)(a1 + 16))
		v1 = (__int64*)(*(_QWORD*)(a1 + 24) + 16i64);
	v7 = *((_DWORD*)v1 + 2);
	if (v7 != 3)
	{
		if (v7 != 4 || !sub_14005AC80((char*)(*v1 + 32), (unsigned __int64*)&v14))
		{
			v8 = 0;
			goto LABEL_15;
		}
		v13 = 3;
		v1 = &v12;
		v12 = v14;
	}
	v8 = (int)*(double*)v1;
LABEL_15:
	v9 = sub_1403C9450(a1, v6, v8);
	v10 = *(_DWORD**)(a1 + 16);
	v10[2] = 1;
	LOBYTE(v4) = v9 != 0;
	result = 1i64;
	*v10 = v4;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 1406FB028: variable 'a1' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];

