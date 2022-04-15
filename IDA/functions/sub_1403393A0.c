#include "../winhttp.h"

//----- (00000001403393A0) ----------------------------------------------------
__int64 __fastcall sub_1403393A0(__int64 a1, struct sockaddr** a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v7; // rax
	struct sockaddr* v8; // rcx
	struct sockaddr* v9; // rcx
	struct sockaddr* v10; // [rsp+48h] [rbp+20h] BYREF

	result = sub_140338F90(a1, (SOCKET*)&v10);
	if ((int)result >= 0)
	{
		v7 = (__int64)sub_14018B280(496i64, 0);
		if (v7)
			v7 = sub_14033EA90(v7, (SOCKET)v10, a3);
		v8 = *a2;
		*a2 = (struct sockaddr*)v7;
		if (v8)
			(*(void(__fastcall**)(struct sockaddr*))(*(_QWORD*)&v8->sa_family + 8i64))(v8);
		*(_DWORD*)&(*a2)[17].sa_data[6] = 2;
		v9 = *a2;
		v10 = v9;
		if (v9)
			(**(void(__fastcall***)(struct sockaddr*)) & v9->sa_family)(v9);
		return sub_1403390D0(a1, &v10);
	}
	return result;
}

