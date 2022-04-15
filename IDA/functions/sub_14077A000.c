//----- (000000014077A000) ----------------------------------------------------
__int64 __fastcall sub_14077A000(__int64 a1, _DWORD* a2, _QWORD* a3)
{
	__int64 result; // rax
	__int64 v6; // rcx
	int v7; // edx
	__int64 v8; // rcx

	result = sub_1407798C0(a1, (__int64)a2, a3);
	if ((int)result >= 0)
	{
		v6 = *(_QWORD*)(a1 + 144);
		if (*(_DWORD*)(v6 + 4) == 7)
			*(_DWORD*)(a1 + 180) = 1065353216;
		v7 = a2[2];
		if (v7)
		{
			*(float*)(a1 + 184) = (float)(int)a2[4] / (float)v7;
			*(float*)(a1 + 188) = (float)((float)(int)a2[6] / (float)(int)a2[2]) * 0.001;
		}
		else
		{
			*(_DWORD*)(a1 + 184) = 1065353216;
			*(_DWORD*)(a1 + 188) = 981668463;
		}
		if (*(_DWORD*)(v6 + 4) == 7)
			sub_140779A70(a1);
		if (qword_140C65898)
		{
			v8 = *(_QWORD*)(qword_140C65898 + 29504);
			if (v8)
			{
				sub_1400EA3E0(v8, "ProgressClickWindowDisplay", byte_1409EC1B4, 1i64);
				sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "SetProgressClickTimes", "iiii", 0i64, 0, 0, 0);
			}
		}
		return 0i64;
	}
	return result;
}
// 1409EC1B4: using guessed type _BYTE byte_1409EC1B4[32];
// 140C65898: using guessed type __int64 qword_140C65898;

