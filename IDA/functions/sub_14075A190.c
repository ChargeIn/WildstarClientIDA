//----- (000000014075A190) ----------------------------------------------------
int* __fastcall sub_14075A190(__int64 a1, int* a2)
{
	__int64 v3; // rcx
	int* v4; // rax
	__int128* v5; // rcx
	int i; // edx
	int* v8; // [rsp+20h] [rbp-E0h] BYREF
	int* v9; // [rsp+28h] [rbp-D8h] BYREF
	int v10; // [rsp+30h] [rbp-D0h] BYREF
	__int128 v11; // [rsp+34h] [rbp-CCh]
	__int128 v12; // [rsp+44h] [rbp-BCh]
	__int128 v13; // [rsp+54h] [rbp-ACh]
	__int128 v14; // [rsp+64h] [rbp-9Ch]
	__int128 v15; // [rsp+74h] [rbp-8Ch]
	__int128 v16; // [rsp+84h] [rbp-7Ch]
	__int128 v17; // [rsp+94h] [rbp-6Ch]
	__int128 v18; // [rsp+A4h] [rbp-5Ch]
	__int128 v19; // [rsp+B4h] [rbp-4Ch]
	__int128 v20[9]; // [rsp+D0h] [rbp-30h] BYREF

	v3 = *(_QWORD*)(qword_140C7F410 + 8);
	v4 = (int*)qword_140C7F410;
	while (v3)
	{
		if (*(_DWORD*)(v3 + 32) < (unsigned int)*a2)
		{
			v3 = *(_QWORD*)(v3 + 24);
		}
		else
		{
			v4 = (int*)v3;
			v3 = *(_QWORD*)(v3 + 16);
		}
	}
	if (v4 == (int*)qword_140C7F410 || *a2 < (unsigned int)v4[8])
	{
		v5 = v20;
		for (i = 17; i >= 0; --i)
		{
			*(_QWORD*)v5 = 0i64;
			v5 = (__int128*)((char*)v5 + 8);
		}
		v10 = *a2;
		v11 = v20[0];
		v12 = v20[1];
		v9 = v4;
		v13 = v20[2];
		v14 = v20[3];
		v15 = v20[4];
		v16 = v20[5];
		v17 = v20[6];
		v18 = v20[7];
		v19 = v20[8];
		sub_14075A2A0((__int64)&unk_140C7F408, &v8, (__int64*)&v9, &v10);
		v4 = v8;
	}
	return v4 + 9;
}
// 140C7F410: using guessed type __int64 qword_140C7F410;

