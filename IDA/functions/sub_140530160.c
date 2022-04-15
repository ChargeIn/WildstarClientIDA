//----- (0000000140530160) ----------------------------------------------------
__int64 __fastcall sub_140530160(_QWORD* a1)
{
	__int64 result; // rax
	int v3; // edx
	int v4; // r8d
	int v5; // ecx
	int v6; // r9d
	_DWORD* v7; // rcx

	result = sub_14052E9B0(a1);
	if (result)
	{
		v3 = 0;
		v4 = 1;
		if (*(_QWORD*)(result + 1152))
		{
			v5 = 2048;
			v6 = 2048;
			if (*(_DWORD*)(result + 1264) == 1)
			{
				v5 = 4096;
				v6 = 4096;
			}
		}
		else
		{
			v5 = 0;
			v6 = 0;
		}
		if (v5 <= *(_DWORD*)(result + 724) - *(_DWORD*)(result + 716)
			&& v6 <= *(_DWORD*)(result + 728) - *(_DWORD*)(result + 720))
		{
			v4 = 0;
		}
		v7 = (_DWORD*)a1[2];
		LOBYTE(v3) = v4 != 0;
		v7[2] = 1;
		result = 1i64;
		*v7 = v3;
		a1[2] += 16i64;
	}
	return result;
}

