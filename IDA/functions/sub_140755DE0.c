#include "../winhttp.h"

//----- (0000000140755DE0) ----------------------------------------------------
__int64 __fastcall sub_140755DE0(__int64 a1, unsigned int a2)
{
	__int64 result; // rax
	__int64 v5; // rsi
	__int64 v6; // rdx
	int v7; // ebp
	__int64 v8; // rdx
	__int64 v9; // rcx
	__int16* v10; // rax
	__int64 v11; // rdx
	__int64 v12; // rdx
	unsigned __int64 v13; // rcx
	unsigned __int16* v14; // r9
	int v15; // eax
	__int64 v16; // rdx
	__int64 v17; // rdx
	int v18; // eax
	__int64 v19; // rdx

	result = sub_1401FC6A0(a2);
	v5 = result;
	if (result)
	{
		result = sub_1404A8310(qword_140C659B0, a2, 1);
		v7 = result;
		if ((_DWORD)result)
		{
			sub_140058900(a1, v6, 0);
			sub_1400EFF50(a1, v8, (unsigned __int64*)"nDatacubeId", a2);
			v10 = sub_14034BDD0(v9, *(_DWORD*)(v5 + 4));
			sub_1400F0090(a1, v11, (unsigned __int64*)"strTitle", (unsigned __int16*)v10);
			v13 = *(_QWORD*)(v5 + 8);
			if (v13 && v13 <= qword_140C3FE70)
				v14 = (unsigned __int16*)(v13 + qword_140C3FE68);
			else
				v14 = 0i64;
			sub_1400F0090(a1, v12, (unsigned __int64*)"strAsset", v14);
			v15 = sub_1404A80B0(qword_140C659B0, a2);
			sub_1400EFEB0(a1, v16, (unsigned __int64*)"bIsComplete", v15);
			sub_1400EFF50(a1, v17, (unsigned __int64*)"nNumCompleted", v7);
			v18 = sub_1404A8430(qword_140C659B0, a2);
			sub_1400EFF50(a1, v19, (unsigned __int64*)"nNumTotal", v18);
			return 1i64;
		}
	}
	return result;
}
// 140755E3C: variable 'v6' is possibly undefined
// 140755E4E: variable 'v8' is possibly undefined
// 140755E56: variable 'v9' is possibly undefined
// 140755E68: variable 'v11' is possibly undefined
// 140755E98: variable 'v12' is possibly undefined
// 140755EB8: variable 'v16' is possibly undefined
// 140755ECA: variable 'v17' is possibly undefined
// 140755EEA: variable 'v19' is possibly undefined
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C659B0: using guessed type __int64 qword_140C659B0;

