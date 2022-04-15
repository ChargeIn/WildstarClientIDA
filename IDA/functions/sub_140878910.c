#include "../winhttp.h"

//----- (0000000140878910) ----------------------------------------------------
HRESULT __fastcall sub_140878910(LPVOID* a1, unsigned int a2, unsigned int a3)
{
	const IID* v6; // rcx
	HRESULT result; // eax
	HRESULT v8; // ebx
	LPVOID ppv; // [rsp+58h] [rbp+20h] BYREF

	v6 = (const IID*)&unk_1409A4238;
	if ((a2 & 1) != 0)
		v6 = &stru_1409A4228;
	result = CoCreateInstance(v6, 0i64, 1u, &stru_1409A4248, &ppv);
	if (result >= 0)
	{
		result = (*(__int64(__fastcall**)(LPVOID, _QWORD, _QWORD))(*(_QWORD*)ppv + 40i64))(ppv, a2, a3);
		v8 = result;
		if (result < 0)
		{
			(*(void(__fastcall**)(LPVOID))(*(_QWORD*)ppv + 16i64))(ppv);
			return v8;
		}
		else
		{
			*a1 = ppv;
		}
	}
	return result;
}

