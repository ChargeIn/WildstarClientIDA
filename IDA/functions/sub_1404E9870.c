//----- (00000001404E9870) ----------------------------------------------------
__int64 __fastcall sub_1404E9870(_QWORD* a1)
{
	int** v2; // rax
	int** v3; // rbx
	bool v4; // cf
	int** v5; // rcx
	int v6; // eax
	unsigned int v7; // ebp
	int v8; // eax
	unsigned int v9; // esi
	int v10; // eax
	int* v11; // rbx
	unsigned __int64 v12; // r8
	int* v14; // [rsp+20h] [rbp-18h] BYREF
	int v15; // [rsp+28h] [rbp-10h]
	int* v16; // [rsp+48h] [rbp+10h] BYREF

	if (!qword_140C63658)
		sub_140056830(a1, (unsigned __int64*)"AlienFx not loaded.");
	v2 = (int**)a1[3];
	v3 = (int**)dword_140A12138;
	v4 = (unsigned __int64)v2 < a1[2];
	v5 = (int**)dword_140A12138;
	if (v4)
		v5 = v2;
	v6 = *((_DWORD*)v5 + 2);
	if (v6 == 3)
		goto LABEL_9;
	if (v6 == 4 && sub_14005AC80((char*)*v5 + 32, (unsigned __int64*)&v16))
	{
		v15 = 3;
		v5 = &v14;
		v14 = v16;
	LABEL_9:
		v7 = (int)*(double*)v5;
		goto LABEL_10;
	}
	v7 = 0;
LABEL_10:
	if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
		v3 = (int**)(a1[3] + 16i64);
	v8 = *((_DWORD*)v3 + 2);
	if (v8 == 3)
		goto LABEL_16;
	if (v8 == 4 && sub_14005AC80((char*)*v3 + 32, (unsigned __int64*)&v16))
	{
		v15 = 3;
		v3 = &v14;
		v14 = v16;
	LABEL_16:
		v9 = (int)*(double*)v3;
		goto LABEL_17;
	}
	v9 = 0;
LABEL_17:
	v16 = 0i64;
	v10 = sub_1400FD2F0((__int64)v5, v7, v9, &v16);
	v11 = v16;
	if (v10 < 0)
		sub_140056830(a1, (unsigned __int64*)"GetLightDescription failed to get light %d description on device %d", v9, v7);
	if (v16)
	{
		v12 = -1i64;
		do
			++v12;
		while (*((_BYTE*)v16 + v12));
		sub_140058710((__int64)a1, (unsigned __int64*)v16, v12);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	if (v11)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v11 - 2) + 8i64))(v11 - 4);
	return 1i64;
}
// 1404E9962: variable 'v5' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63658: using guessed type __int64 qword_140C63658;

