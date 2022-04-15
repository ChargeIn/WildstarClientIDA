//----- (000000014033A3F0) ----------------------------------------------------
__int64 __fastcall sub_14033A3F0(__int64 a1, unsigned __int64 a2)
{
	if (a2 >= (*(_QWORD*)(a1 + 32) - *(_QWORD*)(a1 + 24)) / 24i64)
		return 0i64;
	else
		return *(_QWORD*)(a1 + 24) + 24 * a2;
}

