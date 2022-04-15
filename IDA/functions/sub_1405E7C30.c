//----- (00000001405E7C30) ----------------------------------------------------
__int64 __fastcall sub_1405E7C30(__int64 a1, __int64 a2)
{
	__int64 v4; // rcx

	if (!a2)
		return 5i64;
	v4 = *(_QWORD*)(a2 + 112);
	if ((*(_DWORD*)(v4 + 280) & 0x800) == 0 || *(_DWORD*)(v4 + 284) == *(_DWORD*)(a1 + 64))
		return 0i64;
	else
		return 17i64;
}

