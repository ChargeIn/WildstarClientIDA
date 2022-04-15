//----- (000000014005CA80) ----------------------------------------------------
void __fastcall sub_14005CA80(__int64 a1)
{
	__int64* v1; // r8
	__int64 v2; // r9
	__int64 v3; // rdx
	__int64 v4; // rdx
	__int64 v5; // rax

	v1 = *(__int64**)(a1 + 80);
	v2 = a1;
	if (v1)
	{
		do
		{
			v1 = (__int64*)*v1;
			*((_BYTE*)v1 + 9) &= 0xF8u;
			switch (*((_BYTE*)v1 + 8))
			{
			case 5:
				v1[6] = *(_QWORD*)(v2 + 56);
				goto LABEL_17;
			case 6:
				v1[2] = *(_QWORD*)(v2 + 56);
				goto LABEL_17;
			case 7:
				v3 = v1[2];
				*((_BYTE*)v1 + 9) |= 4u;
				if (v3 && (*(_BYTE*)(v3 + 9) & 3) != 0)
					sub_14005C960(v2, v3);
				v4 = v1[3];
				if ((*(_BYTE*)(v4 + 9) & 3) != 0)
					sub_14005C960(v2, v4);
				break;
			case 8:
				v1[20] = *(_QWORD*)(v2 + 56);
				goto LABEL_17;
			case 9:
				v1[13] = *(_QWORD*)(v2 + 56);
			LABEL_17:
				*(_QWORD*)(v2 + 56) = v1;
				break;
			case 0xA:
				v5 = v1[2];
				if (*(int*)(v5 + 8) >= 4 && (*(_BYTE*)(*(_QWORD*)v5 + 9i64) & 3) != 0)
					sub_14005C960(v2, *(_QWORD*)v5);
				if ((__int64*)v1[2] == v1 + 3)
					*((_BYTE*)v1 + 9) |= 4u;
				break;
			default:
				break;
			}
		} while (v1 != *(__int64**)(v2 + 80));
	}
}
// 14005CAA0: variable 'v1' is possibly undefined
// 14005CAE7: variable 'v2' is possibly undefined

