//----- (00000001405410B0) ----------------------------------------------------
__int64 __fastcall sub_1405410B0(unsigned int a1, int a2, __int64 a3, int a4)
{
	bool v5; // zf
	__int64 v6; // rax
	int v7; // r8d
	__int64 result; // rax
	__int64 v9[2]; // [rsp+20h] [rbp-38h] BYREF
	int v10[10]; // [rsp+30h] [rbp-28h] BYREF

	v5 = *(_DWORD*)(*(_QWORD*)(a3 + 112) + 24i64) == 8;
	v6 = *(_QWORD*)(a3 + 8);
	v10[3] = a1;
	v7 = *(_DWORD*)(v6 + 28);
	v10[2] = a2;
	v10[1] = v7;
	v10[0] = v5;
	v10[4] = a4;
	sub_1405663F0(qword_140C65B70 + 1616, v9, v10);
	if (v9[0] != v9[1])
		return a1;
	result = 2i64;
	if (a1 != 4)
		return a1;
	return result;
}
// 140C65B70: using guessed type __int64 qword_140C65B70;

