//----- (00000001406FAEC0) ----------------------------------------------------
__int64 __fastcall sub_1406FAEC0(__int64 a1)
{
	__int64* v1; // rdx
	int v3; // edi
	int v4; // eax
	unsigned int v5; // edx
	BOOL v6; // eax
	_DWORD* v7; // rcx
	bool v8; // zf
	__int64 result; // rax
	__int64 v10; // [rsp+20h] [rbp-18h] BYREF
	int v11; // [rsp+28h] [rbp-10h]
	__int64 v12; // [rsp+40h] [rbp+8h] BYREF

	v1 = (__int64*)dword_140A12138;
	if (*(_QWORD*)(a1 + 24) < *(_QWORD*)(a1 + 16))
		v1 = *(__int64**)(a1 + 24);
	v3 = 0;
	v4 = *((_DWORD*)v1 + 2);
	if (v4 != 3)
	{
		if (v4 != 4 || !sub_14005AC80((char*)(*v1 + 32), (unsigned __int64*)&v12))
		{
			v5 = 0;
			goto LABEL_8;
		}
		v11 = 3;
		v1 = &v10;
		v10 = v12;
	}
	v5 = (int)*(double*)v1;
LABEL_8:
	v6 = sub_1403C93A0(a1, v5);
	v7 = *(_DWORD**)(a1 + 16);
	v8 = !v6;
	v7[2] = 1;
	result = 1i64;
	LOBYTE(v3) = !v8;
	*v7 = v3;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 1406FAF21: variable 'a1' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];

