//----- (00000001400FC540) ----------------------------------------------------
_QWORD* __fastcall sub_1400FC540(__int64 a1, _QWORD* a2)
{
	_QWORD* v4; // rax
	__int64 v5; // r10
	__int64 v6; // rdx
	_QWORD* v7; // rax
	__int64 v8; // r10
	__int64 v9; // rdx
	__int64 v10; // rbx
	__int64 v11; // rdi
	__int64 v12; // rdx
	__int64 v13; // rdx
	int v14; // ebx
	__int64 v15; // rdx
	__int64 v17; // r8
	__int64(__fastcall * *v18)(); // [rsp+20h] [rbp-28h] BYREF
	int v19; // [rsp+28h] [rbp-20h]
	__int64 v20; // [rsp+30h] [rbp-18h]

	v4 = sub_14005C3C0(
		*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 24) + 16i64) + 32i64) + 160i64),
		*(_DWORD*)(*(_QWORD*)(a1 + 24) + 8i64));
	v6 = *(_QWORD*)(v5 + 16);
	*(_QWORD*)v6 = *v4;
	*(_DWORD*)(v6 + 8) = *((_DWORD*)v4 + 2);
	*(_QWORD*)(v5 + 16) += 16i64;
	v7 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v9 = *(_QWORD*)(v8 + 16);
	*(_QWORD*)v9 = *v7;
	*(_DWORD*)(v9 + 8) = *((_DWORD*)v7 + 2);
	*(_QWORD*)(v8 + 16) += 16i64;
	v10 = *(_QWORD*)(a1 + 16);
	if ((unsigned int)sub_14005BA70(v10, *(_QWORD*)(*(_QWORD*)(v10 + 16) - 32i64), *(_QWORD*)(v10 + 16) - 16i64))
	{
		*(_QWORD*)(v10 + 16) += 16i64;
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 16i64))(a1, 4294967294i64);
		v11 = *(_QWORD*)(a1 + 16);
		v18 = off_140B56A08;
		v20 = v11;
		sub_1400579E0(v11, v12, -2);
		v13 = *(_QWORD*)(v11 + 16);
		*(_QWORD*)v13 = *(_QWORD*)(v13 - 16);
		*(_DWORD*)(v13 + 8) = *(_DWORD*)(v13 - 8);
		*(_QWORD*)(v11 + 16) += 16i64;
		v14 = sub_1400578C0(v11);
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 48i64;
		v19 = v14;
		sub_1400F9F50((__int64)&v18, a2);
		sub_1400579E0(v11, v15, v14);
		return a2;
	}
	else
	{
		*(_QWORD*)(v10 + 16) -= 16i64;
		v17 = 0i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
		a2[1] = 0i64;
		a2[2] = 0i64;
		a2[3] = 0i64;
		if (MEMORY[0])
		{
			do
				++v17;
			while (*(_WORD*)(2 * v17));
		}
		sub_14001C1B0(a2, 0i64, 2 * v17);
		return a2;
	}
}
// 1400FC571: variable 'v5' is possibly undefined
// 1400FC59E: variable 'v8' is possibly undefined
// 1400FC609: variable 'v12' is possibly undefined
// 1400FC64E: variable 'v15' is possibly undefined
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();

