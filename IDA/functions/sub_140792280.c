//----- (0000000140792280) ----------------------------------------------------
__int64 __fastcall sub_140792280(__int64 a1)
{
	__int64 v2; // rdi
	__int64 v3; // rax
	__int64 v4; // rcx
	__int64 v5; // rdi
	__int64 v6; // rax
	__int64 v7; // rcx
	__int64 v8; // rcx
	__int64 v9; // rdi
	unsigned __int64 v10; // r8
	__int64 v11; // rax
	unsigned int* v12; // r9
	__int64 result; // rax
	__int64 v14; // [rsp+20h] [rbp-18h] BYREF
	int v15; // [rsp+28h] [rbp-10h]

	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v2 = *(_QWORD*)(a1 + 16);
	v3 = sub_14005C1B0(a1, 0, 1);
	*(_DWORD*)(v2 + 8) = 5;
	*(_QWORD*)v2 = v3;
	v4 = *(_QWORD*)(a1 + 32);
	*(_QWORD*)(a1 + 16) += 16i64;
	if (*(_QWORD*)(v4 + 120) >= *(_QWORD*)(v4 + 112))
		sub_14005E2C0(a1);
	v5 = *(_QWORD*)(a1 + 16);
	v6 = sub_140062650(a1, (unsigned __int64*)&unk_140C665F0, 0i64);
	*(_DWORD*)(v5 + 8) = 4;
	*(_QWORD*)v5 = v6;
	*(_QWORD*)(a1 + 16) += 16i64;
	v7 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v7 = *(_QWORD*)(v7 - 32);
	*(_DWORD*)(v7 + 8) = *(_DWORD*)(v7 - 24);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_140058BF0(a1, -2);
	*(_QWORD*)(a1 + 16) -= 16i64;
	v8 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v8 = *(_QWORD*)(v8 - 32);
	*(_DWORD*)(v8 + 8) = *(_DWORD*)(v8 - 24);
	*(_QWORD*)(a1 + 16) += 16i64;
	v9 = *(_QWORD*)(a1 + 16);
	v10 = -1i64;
	do
		++v10;
	while (aIndex_108[v10]);
	v11 = sub_140062650(a1, (unsigned __int64*)aIndex_108, v10);
	v12 = (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64);
	v14 = v11;
	v15 = 4;
	result = sub_14005EA50(a1, (__int64*)(v9 - 32), (int*)&v14, v12);
	*(_QWORD*)(a1 + 16) -= 32i64;
	return result;
}

