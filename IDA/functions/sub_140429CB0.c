#include "../winhttp.h"

//----- (0000000140429CB0) ----------------------------------------------------
__int64 __fastcall sub_140429CB0(__int64 a1, int a2, unsigned int a3, __int64 a4, __int64 a5)
{
	__int64 result; // rax
	float* v8; // rcx
	int v9; // edx
	int v10; // edx
	int v11; // edx
	int v12; // eax
	_BYTE* v13; // r8
	char* v14; // rdx
	int v15; // [rsp+20h] [rbp-18h]

	result = qword_140C65898;
	v8 = *(float**)(qword_140C65898 + 120);
	if (v8)
	{
		if (a2)
		{
			v9 = a2 - 2;
			if (v9)
			{
				v10 = v9 - 7;
				if (v10)
				{
					v11 = v10 - 1;
					if (!v11)
						return sub_1400EA3E0(a1, "UI_LevelChanged", byte_1409EBBAC, a3, a5);
					if (v11 == 1)
						return sub_1400EA3E0(a1, "UI_EffectiveLevelChanged", byte_1409EBD14, a3, a5);
					return result;
				}
				v12 = (int)v8[445];
				v13 = &unk_1409EBBFC;
				v14 = "DashEnergyUpdated";
			}
			else
			{
				v12 = (int)v8[387];
				v13 = &unk_1409EBC24;
				v14 = "SprintEnergyUpdated";
			}
		}
		else
		{
			v12 = (*(__int64(__fastcall**)(float*))(*(_QWORD*)v8 + 72i64))(v8);
			v13 = &unk_1409EBC44;
			v14 = "UI_HealthChanged";
		}
		v15 = v12;
		return sub_1400EA3E0(a1, v14, v13, a3, v15);
	}
	return result;
}
// 1409EBBAC: using guessed type _BYTE byte_1409EBBAC[80];
// 1409EBD14: using guessed type _BYTE byte_1409EBD14[24];
// 140C65898: using guessed type __int64 qword_140C65898;

