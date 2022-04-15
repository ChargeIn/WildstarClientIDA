//----- (00000001401961E0) ----------------------------------------------------
void __fastcall sub_1401961E0(__int64 a1, __int64 a2)
{
	__int64 v2; // rbx
	__int64 v4; // rax
	__int64 i; // rdi
	_QWORD* v6; // rdx
	_QWORD* v7; // rcx
	_QWORD* v8; // rcx

	if (a2)
	{
		v2 = a2;
		do
		{
			sub_1401961E0(a1, *(_QWORD*)(v2 + 24));
			v4 = *(_QWORD*)(v2 + 40);
			for (i = *(_QWORD*)(v2 + 16); v4; v4 = *(_QWORD*)(v2 + 40))
			{
				if (*(_QWORD*)v4)
					**(_QWORD**)v4 = *(_QWORD*)(v4 + 8);
				v6 = *(_QWORD**)(v4 + 8);
				if (v6)
					*v6 = *(_QWORD*)v4;
				*(_QWORD*)v4 = 0i64;
				*(_QWORD*)(v4 + 8) = 0i64;
			}
			v7 = *(_QWORD**)(v2 + 48);
			if (v7)
				*v7 = *(_QWORD*)(v2 + 56);
			v8 = *(_QWORD**)(v2 + 56);
			if (v8)
				*v8 = *(_QWORD*)(v2 + 48);
			*(_QWORD*)(v2 + 48) = 0i64;
			*(_QWORD*)(v2 + 56) = 0i64;
			if (*(_QWORD*)(v2 + 40))
				sub_1401A4A00((const void***)(v2 + 40));
			sub_14018B900(v2, 0);
			v2 = i;
		} while (i);
	}
}

