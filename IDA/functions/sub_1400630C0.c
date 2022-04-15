#include "../winhttp.h"

//----- (00000001400630C0) ----------------------------------------------------
_BOOL8 __fastcall sub_1400630C0(__int64 a1, unsigned __int64* a2)
{
	void** v4; // rax
	char v5; // r9
	char v6; // r8
	__int64* v7; // rax
	__int64 v8; // rcx
	__int64 v9; // rdx
	_BOOL8 result; // rax
	__int64* v11; // rax
	char v12; // dl
	__int64 v13; // rcx
	__int64 v14; // r8

	v4 = sub_1407DF3AC();
	v5 = *(_BYTE*)(a1 + 88);
	if (v4)
		v6 = *(_BYTE*)*v4;
	else
		v6 = 46;
	v7 = *(__int64**)(a1 + 72);
	*(_BYTE*)(a1 + 88) = v6;
	v8 = v7[1];
	v9 = *v7;
	while (v8)
	{
		--v8;
		if (*(_BYTE*)(v9 + v8) == v5)
			*(_BYTE*)(v9 + v8) = v6;
	}
	result = sub_14005AC80(**(char***)(a1 + 72), a2);
	if (!result)
	{
		v11 = *(__int64**)(a1 + 72);
		v12 = *(_BYTE*)(a1 + 88);
		v13 = v11[1];
		v14 = *v11;
		while (v13)
		{
			--v13;
			if (*(_BYTE*)(v14 + v13) == v12)
				*(_BYTE*)(v14 + v13) = 46;
		}
		sub_140062CF0(a1, aMalformedNumbe, 284);
	}
	return result;
}

