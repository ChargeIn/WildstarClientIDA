//----- (00000001406D4D50) ----------------------------------------------------
char __fastcall sub_1406D4D50(__int64 a1, char a2, int* a3, __m128i* a4, __int64 a5, __int64 a6)
{
	__int64 v11; // [rsp+40h] [rbp-28h] BYREF
	__int64 v12; // [rsp+48h] [rbp-20h]
	__int64 v13; // [rsp+50h] [rbp-18h]
	__int64 v14; // [rsp+58h] [rbp-10h]

	v11 = 0i64;
	v12 = 0i64;
	v13 = 0i64;
	v14 = 0i64;
	v11 = sub_1401545C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 360i64), (int*)L"DragDropInvalid");
	v12 = sub_1401545C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 360i64), (int*)L"DragDropIgnore");
	v13 = sub_1401545C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 360i64), (int*)L"DragDropValid");
	v14 = sub_1401545C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 360i64), (int*)L"DragDropInvalid");
	return sub_1406D4E40(a1, a2, a3, &v11, a4, a5, a6);
}
// 140B3B9B0: using guessed type wchar_t aDragdropinvali_4[16];
// 140B3B9D0: using guessed type wchar_t aDragdropvalid_2[14];
// 140B3B9F0: using guessed type wchar_t aDragdropignore_1[15];
// 140B3BA10: using guessed type wchar_t aDragdropinvali_3[16];

