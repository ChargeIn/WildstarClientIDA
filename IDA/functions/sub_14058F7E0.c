//----- (000000014058F7E0) ----------------------------------------------------
int* __fastcall sub_14058F7E0(__int64 a1, unsigned __int64* a2)
{
	__int64 v2; // r10
	int* v4; // r8
	int* v5; // rax
	unsigned __int64 v6; // rcx
	unsigned __int64 v8; // [rsp+60h] [rbp+7h] BYREF
	__int128 v9; // [rsp+68h] [rbp+Fh]
	__int128 v10; // [rsp+78h] [rbp+1Fh]
	__int128 v11; // [rsp+88h] [rbp+2Fh]
	__int128 v12; // [rsp+98h] [rbp+3Fh]
	int* v13; // [rsp+C0h] [rbp+67h] BYREF
	int* v14; // [rsp+D0h] [rbp+77h] BYREF

	v2 = *(_QWORD*)(a1 + 8);
	v4 = *(int**)(v2 + 8);
	v5 = (int*)v2;
	while (v4)
	{
		if (*((_QWORD*)v4 + 4) < *a2)
		{
			v4 = (int*)*((_QWORD*)v4 + 3);
		}
		else
		{
			v5 = v4;
			v4 = (int*)*((_QWORD*)v4 + 2);
		}
	}
	if (v5 == (int*)v2 || *a2 < *((_QWORD*)v5 + 4))
	{
		v9 = 0ui64;
		v6 = *a2;
		v10 = 0ui64;
		v11 = 0ui64;
		v8 = v6;
		v12 = 0ui64;
		v13 = v5;
		sub_14058FF30(a1, &v14, (_QWORD**)&v13, &v8);
		v5 = v14;
	}
	return v5 + 10;
}

