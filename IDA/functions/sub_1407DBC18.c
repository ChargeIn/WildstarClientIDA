#include "../winhttp.h"

//----- (00000001407DBC18) ----------------------------------------------------
__int64 __fastcall sub_1407DBC18(unsigned int a1)
{
	int v2; // eax
	__int64 result; // rax
	void (**i)(void); // rbx
	int v5; // eax

	if (sub_1407E9640)
	{
		LOBYTE(v2) = sub_1407E2B30((__int64)&off_140963400);
		if (v2)
			sub_1407E9640(a1);
	}
	sub_1407E2DB8();
	result = sub_1407DBD54(&qword_14095BE48, (unsigned __int64)&unk_14095BE80);
	if (!(_DWORD)result)
	{
		sub_1407DD89C(sub_1407E2308);
		for (i = (void (**)(void)) & unk_140959C98; i < &qword_14095BE40; ++i)
		{
			if (*i)
				(*i)();
		}
		if (qword_140DC6348)
		{
			LOBYTE(v5) = sub_1407E2B30((__int64)&qword_140DC6348);
			if (v5)
				qword_140DC6348(0i64, 2i64);
		}
		return 0i64;
	}
	return result;
}
// 1407DBC3C: variable 'v2' is possibly undefined
// 1407DBCA9: variable 'v5' is possibly undefined
// 1407E9640: using guessed type __int64 __fastcall sub_1407E9640(_QWORD);
// 14095BE40: using guessed type void (*qword_14095BE40)(void);
// 14095BE48: using guessed type __int64 (*qword_14095BE48)(void);
// 140963400: using guessed type __int64 (__fastcall *off_140963400)();
// 140DC6348: using guessed type __int64 (__fastcall *qword_140DC6348)(_QWORD, _QWORD);

