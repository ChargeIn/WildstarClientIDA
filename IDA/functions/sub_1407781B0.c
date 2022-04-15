//----- (00000001407781B0) ----------------------------------------------------
int* __fastcall sub_1407781B0(__int64 a1, int* a2)
{
	int v2; // r8d
	__int64 v3; // r10
	__int64 v5; // rdx
	int* result; // rax
	__int64 v7; // rcx
	_QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF
	int* v9; // [rsp+40h] [rbp+8h] BYREF
	int* v10; // [rsp+48h] [rbp+10h] BYREF

	v2 = *a2;
	v3 = a1 + 24;
	v5 = *(_QWORD*)(a1 + 32);
	result = (int*)v5;
	v7 = *(_QWORD*)(v5 + 8);
	while (v7)
	{
		if (*(_DWORD*)(v7 + 32) < v2)
		{
			v7 = *(_QWORD*)(v7 + 24);
		}
		else
		{
			result = (int*)v7;
			v7 = *(_QWORD*)(v7 + 16);
		}
	}
	if (result == (int*)v5 || v2 < result[8])
	{
		LODWORD(v8[0]) = v2;
		v8[1] = 0i64;
		v9 = result;
		sub_14004F0D0(v3, &v10, (__int64*)&v9, v8);
		result = v10;
	}
	*((_QWORD*)result + 5) = a2;
	return result;
}

