//----- (0000000140684850) ----------------------------------------------------
__int64 __fastcall sub_140684850(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	int* v4; // rdx
	__int64(__fastcall * *v6)(); // [rsp+20h] [rbp-18h] BYREF
	int v7; // [rsp+28h] [rbp-10h]
	int v8; // [rsp+2Ch] [rbp-Ch]

	if (qword_140C65970
		&& *(_QWORD*)(qword_140C65898 + 120)
		&& (v2 = sub_140056AB0(a1, 1u)) != 0
		&& (v3 = *(_QWORD*)(v2 + 8)) != 0
		&& (v4 = *(int**)(v3 + 8)) != 0i64)
	{
		v7 = 0;
		v6 = off_140B6FE30;
		v8 = *v4;
		sub_1406B7660(a1, (__int64)&v6);
		return 1i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 140B6FE30: using guessed type __int64 (__fastcall *off_140B6FE30[2])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;

