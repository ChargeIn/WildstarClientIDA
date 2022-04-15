//----- (0000000140746CE0) ----------------------------------------------------
__int64 __fastcall sub_140746CE0(__int64 a1)
{
	__int64 v2; // rbx
	__int64 v3; // rax
	__int64 v4; // rcx
	__int64 v5; // rcx
	unsigned int v6; // ebx
	unsigned __int64 v7; // rbp
	__int64 v8; // rsi
	__int64 v9; // rax
	__int64 v10; // rdx
	__int64 v11; // rax
	__int64 v13; // [rsp+20h] [rbp-18h] BYREF
	unsigned __int64 v14; // [rsp+28h] [rbp-10h]

	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v2 = *(_QWORD*)(a1 + 16);
	v3 = sub_14005C1B0(a1, 0, 0);
	v4 = qword_140C65898;
	*(_DWORD*)(v2 + 8) = 5;
	*(_QWORD*)v2 = v3;
	*(_QWORD*)(a1 + 16) += 16i64;
	v5 = *(_QWORD*)(v4 + 29520);
	v6 = 0;
	v14 = 0i64;
	v13 = 0i64;
	sub_140778290(v5, &v13);
	v7 = v14;
	v8 = v13;
	if (v14)
	{
		v9 = 0i64;
		do
		{
			v10 = *(_QWORD*)(v8 + 8 * v9);
			v11 = *(_QWORD*)(a1 + 16);
			++v6;
			*(_DWORD*)(v11 + 8) = 3;
			*(double*)v11 = (double)(int)v6;
			*(_QWORD*)(a1 + 16) += 16i64;
			sub_1407469D0(a1, v10);
			sub_14005EA50(
				a1,
				(__int64*)(*(_QWORD*)(a1 + 16) - 48i64),
				(int*)(*(_QWORD*)(a1 + 16) - 32i64),
				(unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
			*(_QWORD*)(a1 + 16) -= 32i64;
			v9 = v6;
		} while (v6 < v7);
	}
	if (v8)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v8 - 16) + 8i64))(v8 - 16);
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

