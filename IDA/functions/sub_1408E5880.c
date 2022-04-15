//----- (00000001408E5880) ----------------------------------------------------
__int64 __fastcall sub_1408E5880(__int64 a1, __int64 a2)
{
	sub_1408E73B0((_QWORD*)(a1 + 16), a2);
	sub_1408E6A80(a1);
	sub_1408ADC30(a1 + 400, *(_QWORD*)(a1 + 488));
	sub_1408ADC30(a1 + 424, *(_QWORD*)(a1 + 488));
	(**(void(__fastcall***)(__int64, _QWORD))a1)(a1, 0i64);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)a2 + 16i64))(a2, a1);
	return 1i64;
}

