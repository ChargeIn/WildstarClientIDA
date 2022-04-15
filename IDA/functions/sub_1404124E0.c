//----- (00000001404124E0) ----------------------------------------------------
__int64 __fastcall sub_1404124E0(__int64 a1, _DWORD* a2, int a3)
{
	unsigned int v3; // ebx
	int v4; // eax
	__int64 v5; // rax

	v3 = 0;
	if (a2 && (v4 = a2[1]) != 0 && *a2)
	{
		if (*a2 != *(_DWORD*)(a1 + 1136) || v4 != *(_DWORD*)(a1 + 1140))
			v3 = 1;
		v5 = *(_QWORD*)a2;
		*(_DWORD*)(a1 + 1208) = 6;
		*(_QWORD*)(a1 + 1136) = v5;
	}
	else if (*(_DWORD*)(a1 + 1208))
	{
		v3 = 1;
		*(_QWORD*)(a1 + 1136) = 0i64;
		*(_DWORD*)(a1 + 1208) = 0;
	}
	if (a3)
	{
		*(_QWORD*)(a1 + 1200) = 0i64;
		sub_140412AD0(a1);
	}
	return v3;
}

