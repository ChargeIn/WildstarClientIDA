#include "../winhttp.h"

//----- (0000000140182BB0) ----------------------------------------------------
char __fastcall sub_140182BB0(__int64 a1, __int64 a2)
{
	if (*(_DWORD*)(a1 + 1076))
		return 1;
	if ((*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1128) + 32i64))(*(_QWORD*)(a1 + 1128))
		&& (*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 1136) + 32i64))(*(_QWORD*)(a1 + 1136), a2)
		&& (*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 1096) + 32i64))(*(_QWORD*)(a1 + 1096), a2)
		&& (*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 1112) + 32i64))(*(_QWORD*)(a1 + 1112), a2))
	{
		*(_DWORD*)(a1 + 1076) = 1;
		return 1;
	}
	return 0;
}

