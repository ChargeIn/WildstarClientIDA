//----- (0000000140757450) ----------------------------------------------------
__int64 __fastcall sub_140757450(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rbx
	__int64 v4; // rax
	unsigned int* v5; // r9
	__int64 v6; // rax
	__int64 v7; // rbx
	__int64 v8; // rax
	unsigned int* v9; // r9
	__int64 v10; // rax
	__int64 v11; // rbx
	__int64 v12; // rax
	unsigned int* v13; // r9
	__int64 v15; // [rsp+20h] [rbp-18h] BYREF
	int v16; // [rsp+28h] [rbp-10h]

	sub_140057020(a1, "DatacubeLib", &off_140B75710);
	v2 = a1[2];
	*(_QWORD*)v2 = 0i64;
	*(_DWORD*)(v2 + 8) = 3;
	a1[2] += 16i64;
	v3 = a1[2];
	v4 = sub_140062650((__int64)a1, (unsigned __int64*)"DatacubeType_Datacube", 0x15ui64);
	v5 = (unsigned int*)(a1[2] - 16i64);
	v15 = v4;
	v16 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v3 - 32), (int*)&v15, v5);
	a1[2] -= 16i64;
	v6 = a1[2];
	*(_QWORD*)v6 = 0x3FF0000000000000i64;
	*(_DWORD*)(v6 + 8) = 3;
	a1[2] += 16i64;
	v7 = a1[2];
	v8 = sub_140062650((__int64)a1, (unsigned __int64*)"DatacubeType_Chronicle", 0x16ui64);
	v9 = (unsigned int*)(a1[2] - 16i64);
	v15 = v8;
	v16 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v7 - 32), (int*)&v15, v9);
	a1[2] -= 16i64;
	v10 = a1[2];
	*(_QWORD*)v10 = 0x4000000000000000i64;
	*(_DWORD*)(v10 + 8) = 3;
	a1[2] += 16i64;
	v11 = a1[2];
	v12 = sub_140062650((__int64)a1, (unsigned __int64*)"DatacubeType_Journal", 0x14ui64);
	v13 = (unsigned int*)(a1[2] - 16i64);
	v15 = v12;
	v16 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v11 - 32), (int*)&v15, v13);
	a1[2] -= 16i64;
	return 1i64;
}
// 140B75710: using guessed type char *off_140B75710;

