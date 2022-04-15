//----- (000000014049BBC0) ----------------------------------------------------
int* __fastcall sub_14049BBC0(__int64 a1, __int64 a2)
{
	__int64 v2; // r10
	__int64 v4; // r8
	unsigned int v5; // r9d
	__int64 v6; // rcx
	int* v8; // rax
	__int64 v9; // r8
	unsigned int v10; // edx
	__int64 v11; // rcx
	int* result; // rax
	__int64 v13; // [rsp+20h] [rbp-18h] BYREF
	__int64 v14; // [rsp+28h] [rbp-10h]
	int* v15; // [rsp+40h] [rbp+8h] BYREF
	int* v16; // [rsp+48h] [rbp+10h] BYREF

	v2 = *(_QWORD*)(a1 + 24);
	v4 = *(_QWORD*)(v2 + 8);
	v5 = **(_DWORD**)(a2 + 8);
	v6 = a1 + 16;
	v8 = (int*)v2;
	while (v4)
	{
		if (*(_DWORD*)(v4 + 32) < v5)
		{
			v4 = *(_QWORD*)(v4 + 24);
		}
		else
		{
			v8 = (int*)v4;
			v4 = *(_QWORD*)(v4 + 16);
		}
	}
	if (v8 == (int*)v2 || v5 < v8[8])
	{
		LODWORD(v13) = **(_DWORD**)(a2 + 8);
		v14 = 0i64;
		v15 = v8;
		sub_140055C60(v6, &v16, (__int64*)&v15, &v13);
		v8 = v16;
	}
	*((_QWORD*)v8 + 5) = a2;
	v9 = *(_QWORD*)(a1 + 56);
	v10 = *(_DWORD*)(a2 + 24);
	v11 = *(_QWORD*)(v9 + 8);
	result = (int*)v9;
	while (v11)
	{
		if (*(_DWORD*)(v11 + 32) < v10)
		{
			v11 = *(_QWORD*)(v11 + 24);
		}
		else
		{
			result = (int*)v11;
			v11 = *(_QWORD*)(v11 + 16);
		}
	}
	if (result == (int*)v9 || v10 < result[8])
	{
		LODWORD(v13) = *(_DWORD*)(a2 + 24);
		v14 = 0i64;
		v15 = result;
		sub_140055C60(a1 + 48, &v16, (__int64*)&v15, &v13);
		result = v16;
	}
	*((_QWORD*)result + 5) = a2;
	return result;
}

