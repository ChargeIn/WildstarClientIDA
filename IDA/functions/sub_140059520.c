//----- (0000000140059520) ----------------------------------------------------
__int64 __fastcall sub_140059520(__int64 a1, __int64 a2)
{
	__int64 v2; // rsi
	__int64 v5; // rax
	__int64 v6; // rsi
	__int64 v7; // rax
	_QWORD* v8; // rcx
	__int64 result; // rax

	v2 = *(_QWORD*)(a2 + 32);
	v5 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64))(v2 + 16))(*(_QWORD*)(v2 + 24), 0i64, 0i64, 320i64);
	if (!v5)
		sub_140061040(a2, 4);
	*(_QWORD*)(v2 + 120) += 320i64;
	*(_QWORD*)(a1 + 80) = v5;
	*(_QWORD*)(a1 + 40) = v5;
	*(_DWORD*)(a1 + 92) = 8;
	*(_QWORD*)(a1 + 72) = v5 + 280;
	v6 = *(_QWORD*)(a2 + 32);
	v7 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64))(v6 + 16))(*(_QWORD*)(v6 + 24), 0i64, 0i64, 720i64);
	if (!v7)
		sub_140061040(a2, 4);
	*(_QWORD*)(v6 + 120) += 720i64;
	*(_QWORD*)(a1 + 16) = v7;
	*(_QWORD*)(a1 + 64) = v7;
	*(_DWORD*)(a1 + 88) = 45;
	*(_QWORD*)(a1 + 56) = v7 + 624;
	*(_QWORD*)(*(_QWORD*)(a1 + 40) + 8i64) = v7;
	*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
	*(_QWORD*)(a1 + 16) += 16i64;
	**(_QWORD**)(a1 + 40) = *(_QWORD*)(a1 + 16);
	v8 = *(_QWORD**)(a1 + 40);
	*(_QWORD*)(a1 + 24) = *v8;
	result = *(_QWORD*)(a1 + 16) + 320i64;
	v8[2] = result;
	return result;
}

