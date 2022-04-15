//----- (000000014088B280) ----------------------------------------------------
void __fastcall sub_14088B280(__int64 a1, __int64 a2, __int64 a3, int* a4, int a5)
{
	__int64 v5; // rbx
	_QWORD* v9; // rdi
	__int64 v10; // rax

	v5 = qword_140C629D8;
	while (v5)
	{
		v9 = (_QWORD*)v5;
		v5 = *(_QWORD*)(v5 + 120);
		if ((*(__int64(__fastcall**)(_QWORD*))(*v9 + 120i64))(v9) == a2)
		{
			v10 = v9[13];
			if ((!a3 || a3 == *(_QWORD*)(v10 + 56)) && (!a5 || a5 == *(_DWORD*)(v10 + 48)))
				sub_14088BB90((__int64)v9, a4, 0xFFFFFFFF);
		}
	}
}
// 140C629D8: using guessed type __int64 qword_140C629D8;

