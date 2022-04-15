#include "../winhttp.h"

//----- (00000001404C24B0) ----------------------------------------------------
void __fastcall sub_1404C24B0(_QWORD* a1)
{
	__int64* v1; // rdi
	__int64 v3; // rcx
	__int64 v4; // rax
	int v5; // ebx
	__int128* v6; // rax
	__int64 v7; // rax
	__int64 v8; // r10
	__int64 v9; // r11
	__int64 v10; // rcx
	int v11; // ebx
	__int64(__fastcall * *TlsValue)(); // [rsp+30h] [rbp-39h] BYREF
	__int128 v13; // [rsp+38h] [rbp-31h]
	__int64(__fastcall * *v14)(); // [rsp+50h] [rbp-19h] BYREF
	__int128 v15; // [rsp+58h] [rbp-11h]
	__int128 v16[5]; // [rsp+70h] [rbp+7h] BYREF
	__int64 v17; // [rsp+D0h] [rbp+67h] BYREF
	__int64 v18; // [rsp+D8h] [rbp+6Fh] BYREF

	v1 = a1 + 36;
	v3 = a1[36];
	if (v3 && !*(_DWORD*)qword_140C659F0)
	{
		v17 = 0i64;
		v4 = (*(__int64 (**)(void))(*(_QWORD*)v3 + 336i64))();
		(*(void(__fastcall**)(__int64, __int64, __int64*))(*(_QWORD*)v4 + 984i64))(v4, 9i64, &v17);
		if (v17)
		{
			(**(void(__fastcall***)(__int64))v17)(v17);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v17 + 936i64))(v17);
			v6 = (__int128*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)*v1 + 56i64))(*v1);
			v16[0] = *v6;
			v16[1] = v6[1];
			v16[2] = v6[2];
			v16[3] = v6[3];
			sub_1404C2960((__int64)a1);
			v18 = a1[11];
			v7 = sub_1404C2740((__int64)a1);
			if ((*(int(__fastcall**)(__int64, __int128*, __int64, __int64*, __int64*, __int64))(v8 + 200))(
				v9,
				v16,
				v17,
				&v18,
				v1,
				v7) < 0)
			{
				*(_QWORD*)&v13 = 0i64;
				TlsValue = &off_140B5E648;
				*((_QWORD*)&v13 + 1) = TlsGetValue(dwTlsIndex);
				TlsSetValue(dwTlsIndex, &TlsValue);
				v14 = TlsValue;
				v18 = 0x141E04238i64;
				v15 = v13;
				v11 = sub_140196F30(&dword_140C8AD2C, 46, &v18, &v14);
				TlsValue = &off_140B5E648;
				TlsSetValue(dwTlsIndex, *((LPVOID*)&v13 + 1));
				if (v11)
					DebugBreak();
			}
			else
			{
				v10 = *v1;
				LODWORD(TlsValue) = -1;
				(*(void(__fastcall**)(__int64, __int64(__fastcall***)()))(*(_QWORD*)v10 + 40i64))(v10, &TlsValue);
				sub_1404C7FF0(a1[37], *v1, (__int64)a1);
			}
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v17 + 8i64))(v17);
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)*v1 + 296i64))(*v1, 0i64);
		}
		else
		{
			*(_QWORD*)&v13 = 0i64;
			TlsValue = &off_140B5E648;
			*((_QWORD*)&v13 + 1) = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			v14 = TlsValue;
			v18 = 0x141E04048i64;
			v15 = v13;
			v5 = sub_140196F30(&dword_140C8AD28, 46, &v18, &v14);
			TlsValue = &off_140B5E648;
			TlsSetValue(dwTlsIndex, *((LPVOID*)&v13 + 1));
			if (v5)
				DebugBreak();
		}
		if (v17)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v17 + 8i64))(v17);
	}
}
// 1404C2638: variable 'v8' is possibly undefined
// 1404C2638: variable 'v9' is possibly undefined
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659F0: using guessed type __int64 qword_140C659F0;
// 140C8AD28: using guessed type _DWORD dword_140C8AD28;
// 140C8AD2C: using guessed type _DWORD dword_140C8AD2C;

