//----- (00000001401D7680) ----------------------------------------------------
__int64 __fastcall sub_1401D7680(__int64 a1, __int64 a2)
{
	__int64 v2; // r8
	__int64 v3; // rax
	__int64 result; // rax

	**(_QWORD**)(a2 + 136) = *(_QWORD*)(a2 + 144);
	v2 = *(_QWORD*)(a2 + 144);
	v3 = *(_QWORD*)(a2 + 136);
	if (v2)
		*(_QWORD*)(v2 + 136) = v3;
	else
		*(_QWORD*)(a1 + 8i64 * *(int*)(a2 + 44) + 24) = v3;
	result = 0i64;
	*(_QWORD*)(a2 + 144) = 0i64;
	*(_QWORD*)(a2 + 136) = 0i64;
	return result;
}

