//----- (0000000140724910) ----------------------------------------------------
__int64 __fastcall sub_140724910(__int64 a1)
{
	__int64 v2; // rax
	int v4; // eax

	v2 = sub_140207D60(*(_DWORD*)(a1 + 108));
	if (v2 && ((v4 = *(_DWORD*)(v2 + 24), (v4 & 0x340) == 0) || v4 == *(_DWORD*)(a1 + 116)))
		return v4 & 0x342;
	else
		return 0i64;
}

