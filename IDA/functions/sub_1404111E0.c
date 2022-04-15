//----- (00000001404111E0) ----------------------------------------------------
__int64 __fastcall sub_1404111E0(__int64 a1, __int64 a2, int a3)
{
	unsigned int v3; // ebx
	bool v4; // zf
	__int64 v5; // rax

	v3 = 0;
	if (a2 && *(_DWORD*)a2 && !*(_DWORD*)(a2 + 12) && *(_QWORD*)(a2 + 16))
	{
		v4 = *(_DWORD*)(a1 + 1048) == *(_DWORD*)a2;
		*(_QWORD*)(a1 + 1048) = *(_QWORD*)a2;
		LOBYTE(v3) = !v4;
		*(_QWORD*)(a1 + 1056) = *(_QWORD*)(a2 + 8);
		*(_QWORD*)(a1 + 1064) = *(_QWORD*)(a2 + 16);
		*(_QWORD*)(a1 + 1072) = *(_QWORD*)(a2 + 24);
		*(_QWORD*)(a1 + 1080) = *(_QWORD*)(a2 + 32);
		*(_QWORD*)(a1 + 1088) = *(_QWORD*)(a2 + 40);
		*(_QWORD*)(a1 + 1096) = *(_QWORD*)(a2 + 48);
		*(_QWORD*)(a1 + 1104) = *(_QWORD*)(a2 + 56);
		*(_QWORD*)(a1 + 1112) = *(_QWORD*)(a2 + 64);
		*(_QWORD*)(a1 + 1120) = *(_QWORD*)(a2 + 72);
		v5 = *(_QWORD*)(a2 + 80);
		*(_DWORD*)(a1 + 1200) = 6;
		*(_QWORD*)(a1 + 1128) = v5;
	}
	else if (*(_DWORD*)(a1 + 1200))
	{
		v3 = 1;
		*(_DWORD*)(a1 + 1048) = 0;
		*(_DWORD*)(a1 + 1200) = 0;
	}
	if (a3)
	{
		*(_QWORD*)(a1 + 1204) = 0i64;
		sub_140412AD0(a1);
	}
	return v3;
}

