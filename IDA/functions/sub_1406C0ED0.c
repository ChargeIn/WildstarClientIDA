//----- (00000001406C0ED0) ----------------------------------------------------
__int64 __fastcall sub_1406C0ED0(_QWORD* a1)
{
	__int64 v1; // xmm0_8
	__int64 result; // rax
	__m128* v4; // rdi
	__int64* v5; // rbx
	__int64* v6; // rcx
	int v7; // ebp
	int v8; // eax
	int v9; // eax
	int v10; // eax
	__int32 v11; // eax
	__int64 v12; // rcx
	__int64 v13; // [rsp+30h] [rbp-28h] BYREF
	int v14; // [rsp+38h] [rbp-20h]
	__int64 v15; // [rsp+68h] [rbp+10h] BYREF
	__int64 v16; // [rsp+70h] [rbp+18h] BYREF

	result = sub_1406C01C0(a1);
	v4 = (__m128*)result;
	if (!result)
		return result;
	v5 = (__int64*)dword_140A12138;
	v6 = (__int64*)dword_140A12138;
	if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
		v6 = (__int64*)(a1[3] + 16i64);
	v7 = 0;
	v8 = *((_DWORD*)v6 + 2);
	if (v8 == 3)
		goto LABEL_8;
	if (v8 == 4 && sub_14005AC80((char*)(*v6 + 32), (unsigned __int64*)&v15))
	{
		v1 = v15;
		v14 = 3;
		v6 = &v13;
		v13 = v15;
	LABEL_8:
		v9 = (int)*(double*)v6;
		goto LABEL_9;
	}
	v9 = 0;
LABEL_9:
	LODWORD(v15) = v9;
	if ((unsigned __int64)(a1[3] + 32i64) < a1[2])
		v5 = (__int64*)(a1[3] + 32i64);
	v10 = *((_DWORD*)v5 + 2);
	if (v10 != 3)
	{
		if (v10 != 4 || !sub_14005AC80((char*)(*v5 + 32), (unsigned __int64*)&v16))
			goto LABEL_16;
		v1 = v16;
		v14 = 3;
		v5 = &v13;
		v13 = v16;
	}
	v7 = (int)*(double*)v5;
LABEL_16:
	v11 = v4[143].m128_i32[3];
	HIDWORD(v15) = v7;
	if (v11 == 2)
	{
		v12 = *(_QWORD*)(qword_140C65898 + 29096);
		if (!v12)
			v12 = *(_QWORD*)(qword_140C65898 + 29088);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v12 + 8i64))(v12);
	}
	else if (v11 == 1)
	{
		v1 = *(unsigned int*)(*(_QWORD*)(qword_140C65898 + 25744) + 4800i64);
	}
	else
	{
		v1 = 0i64;
	}
	return sub_140775350(v4 + 64, (__int64)a1, (__int64)&v15, *(double*)&v1, (__int64)&v4[142].m128_i64[1]);
}
// 1406C102E: variable 'v1' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;

