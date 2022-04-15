//----- (0000000140281A40) ----------------------------------------------------
void __fastcall sub_140281A40(__int64 a1)
{
	__int64 v2; // rdx
	__int64 v3; // rax
	__int64 v4; // rax

	sub_1402ADB40(*(__int64**)(a1 + 8592));
	v2 = *(_QWORD*)(a1 + 8600);
	if (*(_DWORD*)(v2 + 8) == 1)
	{
	LABEL_4:
		v3 = *(_QWORD*)(v2 + 16);
		if (v3)
			*(_DWORD*)(v3 + 184) = 1;
		return;
	}
	if (*(_DWORD*)(v2 + 8) != 2)
	{
		if (*(_DWORD*)(v2 + 8) != 3)
			return;
		goto LABEL_4;
	}
	v4 = *(_QWORD*)(v2 + 16);
	if (v4)
		*(_DWORD*)(v4 + 344) = 1;
}

