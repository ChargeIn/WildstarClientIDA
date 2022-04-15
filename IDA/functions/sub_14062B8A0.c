//----- (000000014062B8A0) ----------------------------------------------------
__int64 __fastcall sub_14062B8A0(__int64* a1)
{
	__int64 result; // rax
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // [rsp+20h] [rbp-28h] BYREF
	__int64 v6; // [rsp+28h] [rbp-20h]
	__int64 v7; // [rsp+30h] [rbp-18h]
	__int64 v8; // [rsp+38h] [rbp-10h]

	result = sub_1402EC590((__int64)a1, a1 + 2);
	if ((int)result >= 0)
	{
		result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64*, __int64))(*(_QWORD*)a1[2] + 40i64))(
			a1[2],
			L"Art\\Camera\\Camera_Shake.m3",
			a1 + 3,
			2i64);
		if ((int)result >= 0)
		{
			v3 = a1[3];
			v5 = 150i64;
			v6 = 1065353216i64;
			v7 = 0i64;
			v8 = 0i64;
			(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v3 + 584i64))(v3, 0i64, &v5);
			result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64*, __int64, __int64, __int64))(*(_QWORD*)a1[2] + 40i64))(
				a1[2],
				L"Art\\Camera\\Camera_Shake.m3",
				a1 + 4,
				2i64,
				v5,
				v6);
			if ((int)result >= 0)
			{
				v4 = a1[4];
				v5 = 150i64;
				v6 = 1065353216i64;
				v7 = 0i64;
				v8 = 0i64;
				(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v4 + 584i64))(v4, 0i64, &v5);
				return 0i64;
			}
		}
	}
	return result;
}
// 140B279B8: using guessed type wchar_t aArtCameraCamer_0[27];
// 140B27AF8: using guessed type wchar_t aArtCameraCamer[27];

