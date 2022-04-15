//----- (0000000140330850) ----------------------------------------------------
__int64 __fastcall sub_140330850(__int64 a1, unsigned __int64 a2)
{
	if (a2 >= (__int64)(*(_QWORD*)(a1 + 32) - *(_QWORD*)(a1 + 24)) >> 3)
		return 0i64;
	else
		return *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8 * a2);
}

